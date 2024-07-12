#pragma once
#include <string>
#include <iostream>

namespace Acc
{
    struct Account
    {
        public:
            const std::string Name;
            const std::string Username;
            const std::string Password;
            const std::string Address;
            const unsigned short Age;
            const std::string ID_num;
            const std::string Type; // student, teacher, etc

        public:
            virtual void FullAccInfo() const;
            virtual void Only_ViewAccInfo() const;
            
            explicit Account(const std::string& name, const std::string& username, const std::string& id_num, 
                             const std::string& pass, const std::string& address, const unsigned short age,
                             const std::string& type)
                : Name(name), Username(username), Password(pass), Address(address), Age(age), ID_num(id_num), Type(type) {}
            virtual ~Account() noexcept = default;
    };
    class Admin final : public Account
    {
        private:
            void AccessToViewAccs() const noexcept;
        public:
            void FullAccInfo() const override;
            void Only_ViewAccInfo() const override;
            explicit Admin(const std::string& name, const std::string& username, const std::string& id_num, 
                             const std::string& pass, const std::string& address, const unsigned short age)
                : Account(name, username, id_num, pass, address, age, "Admin") {}
            
    };
    class Student final : public Account
    {
        private:
            void Borrowed_books() const noexcept;
        public:
            void FullAccInfo() const override;
            void Only_ViewAccInfo() const override;
            explicit Student(const std::string& name, const std::string& username, const std::string& id_num, 
                             const std::string& pass, const std::string& address, const unsigned short age)
                : Account(name, username, id_num, pass, address, age, "Student") {}
            
    };
    class Teacher final : public Account
    {
        private:
            void Borrowed_books() const noexcept;
        public:
            void FullAccInfo() const override;
            void Only_ViewAccInfo() const override;
            explicit Teacher(const std::string& name, const std::string& username, const std::string& id_num, 
                             const std::string& pass, const std::string& address, const unsigned short age)
                : Account(name, username, id_num, pass, address, age, "Teacher") {}
            
    };


};