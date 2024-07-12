#pragma once
#include "Account.hpp"
#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include <filesystem> // for folder
#include <fstream> // for file manipulation
namespace LibSys
{
    class Sys final
    {
        private:
            //static enum {Student, Teacher};
            static void Login();
            static void Signup();
            static void ViewAccs(); // for admin

        private:
            static void Run();

        private:
            static void initAccs();
            static void createFolders(const std::string& folderName);
            static void createFile(const std::string& fileName);
            inline static std::vector<std::vector<std::unique_ptr<Acc::Account>>> AccVector;

        public:
            explicit Sys();
            ~Sys() noexcept = default;
    };

};
