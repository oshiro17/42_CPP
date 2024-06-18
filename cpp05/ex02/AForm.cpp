#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
    : _name("Defauly"), _signed(false), _gradeToSign(150), _gradeToExecute(150){};

AForm::AForm(const std::string &name)
    : _name(name), _signed(false), _gradeToSign(150), _gradeToExecute(150){};

AForm::AForm(const int gradeToSign, const int gradeToExecute)
    : _name("Default"), _signed(false), _gradeToSign(gradeToSign),
      _gradeToExecute(gradeToExecute)
{
  if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
  {
    throw GradeTooHighException();
  }
  if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
  {
    throw GradeTooLowException();
  }
};

AForm::AForm(const std::string &name, const int gradeToSign,
           const int gradeToExecute)
    : _name(name), _signed(false), _gradeToSign(gradeToSign),
      _gradeToExecute(gradeToExecute)
{
  if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
  {
    throw GradeTooHighException();
  }
  if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
  {
    throw GradeTooLowException();
  }
};

AForm::AForm(const AForm &Aform)
    : _name(Aform.getName()), _signed(Aform.getSign()),
      _gradeToSign(Aform.getGradeToSign()),
      _gradeToExecute(Aform.getGradeToExecute()){};

AForm &AForm::operator=(const AForm &Aform)
{
  if (this != &Aform)
  {
    this->_signed = Aform.getSign();
  }
  return (*this);
};
AForm::~AForm(){};
const std::string &AForm::getName() const { return (this->_name); }
bool AForm::getSign() const { return (this->_signed); }
int AForm::getGradeToSign() const { return (this->_gradeToSign); }
int AForm::getGradeToExecute() const { return (this->_gradeToExecute); }
void AForm::beSigned(const Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->getGradeToSign()) {
    throw GradeTooLowException();
  }
  this->_signed = true;
}
const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade too low");
}

std::ostream &operator<<(std::ostream &os, const AForm &Aform) {
  os << "AForm name: " << Aform.getName() << std::endl
     << "AForm grade to sign: " << Aform.getGradeToSign() << std::endl
     << "AForm grade to execute: " << Aform.getGradeToExecute();
  return (os);
};

const char *AForm::NotSignedException::what() const throw() {
  return ("Form not signed");
}

const char *AForm::NotOpenException::what() const throw() {
  return ("File cannot open");
}
