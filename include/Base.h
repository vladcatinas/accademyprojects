#include <string>

class Base{

    protected:
        std::string VIN;
        std::string fuel;
        std::string bodywork;
        std::string traction;
        std::string power;
        std::string equipment;

    public:
        Base();
        Base(const Base& other);
        Base& operator=(const Base& other);
        Base(Base&& other) noexcept;
        Base& operator = (Base&& other) noexcept;

        virtual ~Base();
        virtual void printInfo() const = 0;
};