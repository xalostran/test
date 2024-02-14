int rascal()
{
    int health = 100;
    int damage = 57;

    if (health < damage)
        return 0;

    return 1;
}

void main()
{
    rascal();
}