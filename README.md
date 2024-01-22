# PRJC-Zkouska
Termín 10.1.2023
# C
1. Průchod pole realizujte tak, že začnete na prvku s indexy 0,0 a posunete se na prvek ve svém přímém okolí, který má ze všech prvků v okolí nejmenší hodnotu a přitom jsme na něm ještě nebyli. Takto pokračujte, dokud je možné se pohybovat, tedy dokud existuje prvek v okolí aktuálního, který jsme nenavštívili.

2. Napište funkci, která tento průchod pole uloží do jednorozměrného pole int a to tak, aby se nekopírovaly hodnoty původního pole.

3. Napište test, který ověří, že funkce průchodu a pole intů uložené v bodě 2 jsou správným řešením.

# C++

Navrhněte program v C++, který bude simulovat banku. Banka umí přijímat platby z různých zdrojů (např. šek, platební karta, hotovost). U každého druhu platby se stanoven poplatek (číslo float) a číslo účtu, na který se má připsat. Při připsání na účet je třeba poslat oznámení majiteli účtu o transakci. To je možné poslat emailem, SMS dle toho, co má nastaveno (může mít vše, nebo nic, nebo jen jednu možnost).

Napište metodu, která realizuje posílání oznámení (oznámení má obecně komu - bere se od majitele účtu a text oznámení). Napište program modulárně, aby bylo možné přidávat druhy plateb i možnosti oznámení.
