#include "Activation.hpp"

bool Activation::verifActivation()
{
    std::ifstream fs("activation.regkey");
    if (fs.fail())
    {
        std::cout << "Errer lors du lecture de la cle" << std::endl;
        return false;
    }
    else
    {
        std::string key;
        fs >> key;
        fs.close();
        if (key == keyTest)
        {
            std::cout << "Activation reussit" << std::endl;
            activat();
            return true;
        }
        else
        {
            std::string s;
            std::ifstream tryFyle("status.txt");
            tryFyle >> s;
            tryFyle.close();
            int i = stoi(s), value;
            std::ofstream w("status.txt");
            value = (i - 1);
            w << value;
            w.close();
            return false;
        }
    }
}

void Activation::activat()
{
    std::ofstream fs("status.txt");
    fs << "activated";
    status = true;
    fs.close();
}

Activation::Activation()
{
    std::string i;
    std::ifstream fs("status.txt");
    if (fs.fail())
    {
        std::cout << "status.txt introuvable" << std::endl,
        point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activated")
        {
            status = true;
        }
        else
        {
            point = stoi(i);
        }
        fs.close();
    }
}

Activation::~Activation()
{
}

bool Activation::getStatus()
{
    return status;
}

int Activation::getPoint()
{
    return point;
}