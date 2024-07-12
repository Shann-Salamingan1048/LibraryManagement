#include "../Headers/System.hpp"

using namespace LibSys;


void Sys::Run()
{

}

void Sys::initAccs()
{
    const std::string teacherFolder = "../Data/Teacher";
    const std::string studentFolder = "../Data/Student";
    const std::string adminFolder = "../Data/Admin";

    createFolders(teacherFolder);
    createFolders(studentFolder);
    createFolders(adminFolder);

    const std::string teacherFile = teacherFolder + "/TeacherAccs.txt";
    const std::string studentFile = studentFolder + "/StudentAccs.txt";
    const std::string adminFile = adminFolder + "/AdminAccs.txt";

    createFile(teacherFile);
    createFile(studentFile);
    createFile(adminFile);
}
void Sys::createFile(const std::string& fileName)
{
    // Create an ofstream object to write to the file
    std::ofstream outfile;

    // Open the file. If it doesn't exist, it will be created.
    outfile.open(fileName);

    // Check if the file opened successfully
    if (outfile.is_open()) 
    {
        // Write some content to the file
        //outfile << "This is an example text file.\n";
        //outfile << "It contains two lines of text.\n";

        // Close the file
        outfile.close();
        std::cout << "The File " << fileName << " created or opened successfully." << std::endl;
    } 
    else 
    {
        std::cerr << "Failed to open the file." << std::endl;
    }
}
void Sys::createFolders(const std::string& folderName)
{
    if (std::filesystem::create_directory(folderName)) 
    {
         std::cout << "Folder created successfully: " << folderName << std::endl;
    } 
    else 
    {
         std::cerr << "Failed to create folder or it already exists: " << folderName << std::endl;
    }
}
Sys::Sys()
{
    initAccs();
    Run();
}