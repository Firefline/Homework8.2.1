// Homework8.2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include "decorator.cpp"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    auto text_block1 = new ItalicText(new BoldText(new Text()));
    text_block1->render("Hello world");

    std::cout << std::endl;

    auto text_block2 = new Paragraph(new Text());
    text_block2->render("Hello world");
    std::cout << std::endl;

    auto text_block3 = new Reversed(new Text());
    text_block3->render("Hello world");
    std::cout << std::endl;

    auto text_block4 = new Link(new Text());
    text_block4->render("netology.ru", "Hello world");
    std::cout << std::endl;
}
