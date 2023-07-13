#include <iostream>
#include<Windows.h>




class Character {
public:
    virtual void Attack(Character* target) = 0;
};


class Player : public Character {
public:
    void Attack(Character* target) override {
        std::cout << "�� �������� �����!" << std::endl;
    }
};


class Enemy : public Character {
public:
    void Attack(Character* target) override {
        std::cout << "���� ������� ���!" << std::endl;
    }
};

// ������� "���������"
void Attack(Character* character) {
    character->Attack(character);
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Player player;
    Enemy enemy;

    
    Attack(&player);

    
    Attack(&enemy);

    return 0;
}
