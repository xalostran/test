int rascal()
{
    int health = 100;
    int damage = 58;

    if (health < damage)
        return 0;

    return 1;
}

void main()
{
    rascal();
}
