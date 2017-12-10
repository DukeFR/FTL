#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
void affichage();
void aleatoire();
int menu();
void vachette();
void raz();
void randomdustunfest();
void randomhorizon();



int menu(int*JVJ,int*IA)   ///C'est la fonction qui lance le menu pour choisir le mode de jeu au démarrage
{
int choix,choix2,joueur,verif=0;
do{
printf("                    ----------------------------------------------------       \n ");
printf("                   |@@@@          @@@@@          @  @      @      @@@@@|      \n");
printf("                    |@   @    @@     @     @@        @      @      @    |     \n");
printf("                    |@@@@    @  @    @    @  @    @  @      @      @@@  |     \n");
printf("                    |@   @  @@@@@@   @   @@@@@@   @  @      @      @    |      \n");
printf("                    |@@@@   @    @   @   @    @   @  @@@@@  @@@@@  @@@@@|      \n");
printf("                    |                                                   |      \n");
printf("                    |@   @         @     @          @      @@@@@        |\n");
printf("                    |@@  @    @@   @     @   @@     @      @            |\n");
printf("                    |@ @ @   @  @   @   @   @  @    @      @@@          |\n");
printf("                    |@  @@  @@@@@@   @ @   @@@@@@   @      @            |\n");
printf("                    |@   @  @    @    @    @    @   @@@@@  @@@@@        |\n");
printf("                    ---------------------------------------------------- \n\n\n\n\n\n ");
printf("    Bienvenue dans le menu matelot ! Fais ton choix !\n\n");                                ///menu laissant le choix au joueur du mode de jeu
printf("    1.Jouer une partie.\n\n");
printf("    2.Aide.\n\n");
printf("    3.Fin.\n\n");
scanf("%d",&choix);
switch(choix)
{
    case 1:
    printf("1. Joueur contre Joueur?\n");         ///Le joueur a choisi de lancer la partie
    printf("2. Joueur contre IA?\n");
    printf("3. Mode Histoire?\n");
    verif=1;
    scanf("%d",&choix2);
    switch(choix2)
    {
    case 1:
    joueur=1;                               ///choix du mode de jeu, s'il tape 1, il lance le mode joueur contre joueur si il tape 2 lancement du jeu contre l'ordinateur
    *JVJ=joueur;
    break;
    case 2 :
    joueur=2;
    *IA=joueur;
    break;
    case 3:
    joueur=2;
    *JVJ=joueur;
    break;
    default:
    printf("Vous etes indecis?\n");    ///blindage
    verif=0;
    }
    break;
    case 2:                                                 ///Aide qui s'affiche quand le joueur tape 2 dans le menu
    printf("Bienvenue dans l'aide mousaillon!\n");
    printf("Bienvenue dans l'aide !\n\n");
            printf("Pour jouer, vous disposez d'une grille sur laquelle il y a 4 types de bateaux :\n");
            printf("Un cuirasse, d’une taille de 7 cases et pouvant tirer dans une zone de 9 cases,\n");
            printf("Deux croiseurs, d’une taille de 5 cases et pouvant tirer dans une zone de 4 cases,\n");
            printf("3 destroyers, d’une taille de 3 cases, pouvant tirer une case,\n");
            printf("4 sous-marins, d’une taille d’une case, pouvant tirer une case egalement.\n\n");
            printf("On se deplace dans la grille en appuyant sur les touches ZQSD.\n");
            printf("Z est pour se deplacer en haut, Q pour aller à gauche, D pour aller à droite et S pour descendre dans la grille.\n\n");
            printf("Au début de la partie, vous aurez donc 10 bateaux répartis aléatoirement sur la grille, d’une taille de 15 cases par 15.\n");
            printf("A chaque tour, vous aurez le choix entre deplacer un bateau ou tirer.\n");
            printf("Il est possible de déplacer un bateau d’une seule case seulement, horizontalement ou verticalement.\n");
            printf("Un bateau ne peut se deplacer sur l’emplacement d’un autre, de plus il ne pourra tirer dès lors qu’il est coule soit quand toutes ses cases sont touchees.");
            printf("Néanmoins, dès qu’un bateau est touché il ne peut plus se déplacer dans la grille, mais il peut continuer à tirer.");
            printf("Pour tirer, il faudra indiquer les coordonnees de la case où vous voulez tirer.");
            printf("On rappellera que seuls les sous-marins peuvent couler d’autres sous-marins.\n");
            printf("C’est le premier à couler la flotte de son adversaire qui remporte la partie.\n\n");
            printf("Bonne chance !\n");
            verif=0;                            ///Relance le menu
    break;
    case 3:                                 ///Le joueur quitte le jeu s'il tape 3
    printf("A la revoyure Mousaillon!\n");
    exit(0);
    default:                ///blindage s'il tape n'importe quelle autre valeur
       verif=0;

}
}while (verif==0);
return(0);
}


void pseudo(char* pseudo1,char* pseudo2)  ///Menu permettant au joueur de choisir son pseudonyme s'il a pris le mode joueur contre joueur
{
    int choix;
    printf("Bienvenue dans le mode Joueur contre Joueur!\n");
    printf("Quel est le nom du premier joueur?\n");
    scanf("%s",pseudo1);                                        ///Le pseudo est stockée en mémoire à l'aide d'une chaine de caractère
    printf("Bienvenue jeune %s!\n\n",pseudo1);
    printf("Qui est ton valeureux adversaire?\n");
    scanf("%s",pseudo2);
    printf("Bienvenue a toi %s !\n",pseudo2);
    printf("Ainsi ce sera %s contre %s?\n\n",pseudo1,pseudo2);
    printf("1.Oui!\n");
    printf("2.Non,je me suis trompe.\n");
    scanf("%d",&choix);
    while (choix!=1)                                        ///blindage
    {
     printf("Bienvenue dans le mode Joueur contre Joueur!\n");
    printf("Quel est le nom du premier joueur?\n");
    scanf("%s",pseudo1);
    printf("Bienvenue jeune %s!\n\n",pseudo1);
    printf("Qui est ton valeureux adversaire?\n");
    scanf("%s",pseudo2);
    printf("Bienvenue a toi %s!\n",pseudo2);
    printf("Ainsi ce sera %s contre %s?\n\n",pseudo1,pseudo2);
    printf("1.Oui!\n");
    printf("2.Non,je me suis trompe.\n");
    scanf("%d",&choix);
    }
    printf("Initialisation de la partie.\n");

}


void PseudoOrdi(char pseudo[100])      ///Menu permettant de choisir son pseudonyme si le joueur a choisi le mode joueur contre l'ordinateur
{
    int choix;
    printf("Bienvenue dans le mode Joueur contre l'ordinateur!\n");
    printf("Quel est ton nom?\n");
    scanf("%s",pseudo);                                     ///pseudo stockée a l'aide d'une chaine de caractère
    printf("Bienvenue %s !Est-ce bien toi?\n",pseudo);
    printf("1.Oui!\n");
    printf("2.Non, je me suis trompe.\n");
    scanf("%d",&choix);
    while (choix!=1)                                ///blindage
    {
    printf("Quel est ton nom?\n");
    scanf("%s",pseudo);
    printf("Bienvenue %s !Est-ce bien toi?\n",pseudo);
    printf("1.Oui!\n");
    printf("2.Non, je me suis trompe.\n");
    scanf("%d",&choix);
    }
    printf("Initialisation de la partie.\n");
}

void tour(char pseudo1[100],char pseudo2[100])    ///Menu initialisant en demandant si le joueur a bien compris les règles du jeu
{
    int choix,choix2;
    printf("%s\n%s\n",pseudo1,pseudo2);
    printf("C'est parti! Avez compris les regles avant de commencer matelot?\n");
    printf("1.Oui, c'est quand que l'on joue?\n");
    printf("2.Non.On peut voir les regles?\n");
    scanf("%d",&choix);
    switch (choix)
    {case 1:
        printf("C'est parti!\n");
        printf("%s commence\n",pseudo1);

        break;
    case 2:
        printf("Bienvenue dans l'aide mousaillon!\n");
    printf("1.Comment jouer?\n");
    printf("2.Les grilles.\n");
    printf("3.Les navires.\n");
    scanf("%d",&choix2);
    switch(choix2)
    {
        case 1:
            printf("expliquer comment jouer\n");
            break;
        case 2:
            printf("expliquer le mode de fonctionnement des grilles\n");
            break;
        case 3:
            printf("expliquer le mode de fonctionnement des navires\n");
            break;
        default:
        printf("Une erreur?\n");
        break;
    }
    }

}

void AltEnter() ///////https://cboard.cprogramming.com/cplusplus-programming/87684-how-make-console-window-fullscreen.html
{
    keybd_event(VK_MENU,                ///Sous programme permettant de mettre la console en plein ecran
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
}

int main()   ///Main du programmme
{
int JVJ,IA,round;
int* NbFus1;
int* NbFus2;            ///Variables pour les fusees
int* NbFus3;
int histoire=0;
char pseudo1[100];      ///Chaines de caracteres pour les pseudos
char pseudo2[100];
char pseudo3[100];
char position1[15][15];     ///Tableau a 2 dimensions pour les grilles des joueurs
char position2[15][15];
char position3[15][15];
char position4[15][15];
srand(time(NULL));          ///Initialisation du temps pour l'aleatoire
AltEnter();                 ///Appel sous-programme qui met la console en plein écran
menu(&JVJ,&IA);             ///Appel sous-programme qui lance le menu qui choisit le mode de jeu (les variables envoyées dans le sas des paramètres permettent de savoir quel mode de jeu le joueur a choisi)
if (JVJ==1)                 ///Si le joueur a choisi le mode joueur contre Joueur
{
pseudo(pseudo1,pseudo2); ///Appel sous programme qui stocke les pseudonymes
tour(pseudo1,pseudo2);    ///Menu qui vérifie si le joueur a bien compris les regles
system("cls");             ///La console est clear
raz(position1);             ///Appel de la fonction qui remet à zéro les matrices
raz(position2);
raz(position3);
raz(position4);
Placement(position1,histoire);        ///Appel sous programme qui s'occupe du placement aléatoire des bateaux pour le joueur 1
Placement(position2,histoire);        ///De même pour le joueur 2
for(round=1;round>0;round++) ///Boucle for qui se finit si victoire d'un des joueurs
{
debut(position1,position3);     ///Appel sous programme qui affiche les matrices du joueur 1
printf("TOUR:%d\n",round);      /// Ligne permettant d'afficher à quels tours sont les joueurs
printf("C'est à ton tour %s\n",pseudo1); ///Ligne spécififiant a qui de jouer
choix(position1,position2,position3,&NbFus1,&NbFus2,&NbFus3); ///Appel sous programme qui permet au joueur de tirer ou de se déplacer
victoire(position2,&round); ///Appel du sous programme qui vérifie si le joueur 1 a gagné (cad que le joueur 2 n'a plus de bateaux)
//vachette();
//system("cls");
debut(position2,position4);         ///De même que pour les commentaires au dessus mais pour le joueur 2
printf("TOUR:%d\n",round);
printf("C'est à ton tour %s\n",pseudo2);
choix(position2,position4,position1,&NbFus1,&NbFus2,&NbFus3);
victoire(position1,&round);
//vachette();
//system("cls");
}
}
if(JVJ=2)
{
int histoire=1;
pseudo(pseudo1,pseudo2); ///Appel sous programme qui stocke les pseudonymes
tour(pseudo1,pseudo2);    ///Menu qui vérifie si le joueur a bien compris les regles
system("cls");             ///La console est clear
raz(position1);             ///Appel de la fonction qui remet à zéro les matrices
raz(position2);
raz(position3);
raz(position4);
Placement(position1,histoire);        ///Appel sous programme qui s'occupe du placement aléatoire des bateaux pour le joueur 1
Placement(position2,histoire);        ///De même pour le joueur 2
for(round=1;round>0;round++) ///Boucle for qui se finit si victoire d'un des joueurs
{
debut(position1,position3);     ///Appel sous programme qui affiche les matrices du joueur 1
printf("TOUR:%d\n",round);      /// Ligne permettant d'afficher à quels tours sont les joueurs
printf("C'est à ton tour %s\n",pseudo1); ///Ligne spécififiant a qui de jouer
choix(position1,position2,position3,&NbFus1,&NbFus2,&NbFus3); ///Appel sous programme qui permet au joueur de tirer ou de se déplacer
victoire(position2,&round); ///Appel du sous programme qui vérifie si le joueur 1 a gagné (cad que le joueur 2 n'a plus de bateaux)
//vachette();
//system("cls");
debut(position2,position4);         ///De même que pour les commentaires au dessus mais pour le joueur 2
printf("TOUR:%d\n",round);
printf("C'est à ton tour %s\n",pseudo2);
choix(position2,position4,position1,&NbFus1,&NbFus2,&NbFus3);
victoire(position1,&round);
}
}
if (IA==2)   ///Si le joueur a choisi lancer une partie contre l'ordinateur
{
PseudoOrdi(pseudo3); ///Appel sous-programme qui stocke le pseudonyme
system("cls"); ///Console est clear
raz(position1); ///Appel sous programme qui remet à zéro les matrices
raz(position2);
raz(position3);
raz(position4);
Placement(position1,histoire); ///Appel sous programme qui s'occupe de placer les bateaux aleatoirement
Placement(position2,histoire);
for(round=1;round>0;round++) ///Boucle for qui se finit seulement si un des joueurs gagnent
{
debut(position1,position3); ///Appel sous programme qui affiches les matrices
printf("TOUR:%d\n",round); ///Ligne permettant de savoir à quels tours sont les joueurs
printf("C'est à ton tour %s\n",pseudo3); ///Ligne permettant de savoir à qui de joueur
choix(position1,position4); ///Appel de la fonction qui choisit si le joueur veut tirer ou se déplacer
victoire(position2,&round); ///vérifie si le joueur 1 a gagné
debut(position2,position4);
deplacementIa(position2);
//tirer(position1,position4, &NbFus1, &NbFus2, &NbFus3);
//vachette();
//system("cls");

}
}
return 0;
}


void Placement(char positio[15][15],int histoire) ///Appel de fonction qui place alétoirement les bateaux
    {
    int x;
    int y;
    int i=0;
    int h;
    int j;
    for (i=0;i<7;i++) ///Placement aléatoire du cuirasse
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y);
        }while((x>8)||(y>8)||(x<5)||(y<5)); ///blindage
        }
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='A'; ///affichage du cuirasse dans la grille
        }
        if (h==0)
        {
            positio[x][y+i]='A';
        }
        }

    }
    for (j=0;j<2;j++) ///Placement aleatoire des deux croiseurs
    {
    i=0;
    for (i=0;i<5;i++)
    {

        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y); ///Tirage aleatoire des coordonnees
        }while((positio[x][y]!=' ')||(positio[x+1][y]!=' ')||(positio[x+2][y]!=' ')||(positio[x+3][y]!=' ')||(positio[x+4][y]!=' ')||(positio[x][y+1]!=' ')||(positio[x][y+2]!=' ')||(positio[x][y+3]!=' ')||(positio[x][y+4]!=' ')||(x>9)||(y>9)||(x<4)||(y<4));
        } ///blindage
        if (j==0)
        {
        if (i==0)
        {randomhorizon(&h);} ///tirage aleatoire si le bateau sera vertical ou horizontal
        {if (h==1)
        {
            positio[x+i][y]='C'; ///affichage du premier croiseur
        }
        if (h==0)
        {
            positio[x][y+i]='C';
        }
        }
        }
        if (j==1)
        {
        if (i==0)
        {randomhorizon(&h);} ///affichage du deuxième croiseur
        {if (h==1)
        {
            positio[x+i][y]='R';
        }
        if (h==0)
        {
            positio[x][y+i]='R';
        }
        }

    }
    }
    }
    for (j=0;j<3;j++) ///Placement aléatoire des trois destroyers
    {
    i=0;
    for (i=0;i<3;i++)
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y); ///tirage aléatoire des coordonnées des destroyers
        }while((positio[x][y]!=' ')||(positio[x+1][y]!=' ')||(positio[x+2][y]!=' ')||(positio[x][y+1]!=' ')||(positio[x][y+2]!=' ')||(x>12)||(y>12)||(x<3)||(y<3));
        } ///blindage
        if (j==0)
        {
        if (i==0)
        {randomhorizon(&h);} ///tirage aléatoire si le bateau sera vertical ou horizontal
        {if (h==1)
        {
            positio[x+i][y]='D'; ///Affichage du premier destroyer
        }
        if (h==0)
        {
            positio[x][y+i]='D';
        }
        }

    }
    if (j==1)
        {
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='E'; ///afficage du deuxième destroyer
        }
        if (h==0)
        {
            positio[x][y+i]='E';
        }
        }

    }
    if (j==2)
        {
        if (i==0)
        {randomhorizon(&h);}
        {if (h==1)
        {
            positio[x+i][y]='Y'; ///affichage du troisième destroyer
        }
        if (h==0)
        {
            positio[x][y+i]='Y';
        }
        }

    }
    }
    }
    for (j=0;j<4;j++) ///Placement aleatoire des sous marins
    {
    i=0;
    for (i=0;i<1;i++)
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y); ///Tirage aleatoire des coordonnes
        }while((positio[x][y]!=' ')); ///Blindage
        if (j==0)
        {positio[x][y]='S';} ///Placement du premier sous marin
        if(j==1)
        {positio[x][y]='T';} ///placement du second sous marin
        if(j==2)
        {positio[x][y]='U';} ///placement du troisieme sous marin
        if(j==3)
        {positio[x][y]='V';} ///placement du quatrieme sous marin

    }
    }
    }
    if(histoire==1)
    {for (j=0;j<4;j++) ///Placement aleatoire des sous marins
    {
    i=0;
    for (i=0;i<1;i++)
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y); ///Tirage aleatoire des coordonnes
        }while((positio[x][y]!=' ')); ///Blindage
        if (j==0)
        {positio[x][y]='B';} ///Placement du premier sous marin
        if(j==1)
        {positio[x][y]='B';} ///placement du second sous marin
        if(j==2)
        {positio[x][y]='B';} ///placement du troisieme sous marin
        if(j==3)
        {positio[x][y]='B';} ///placement du quatrieme sous marin
        }

    }
    }
    }
    {for (j=0;j<4;j++) ///Placement aleatoire des sous marins
    {
    i=0;
    for (i=0;i<1;i++)
    {
        if (i==0)
        {
        do
        {
            randomdustunfest(&x,&y); ///Tirage aleatoire des coordonnes
        }while((positio[x][y]!=' ')); ///Blindage
        if (j==0)
        {positio[x][y]='^';} ///Placement du premier sous marin
        if(j==1)
        {positio[x][y]='^';} ///placement du second sous marin
        if(j==2)
        {positio[x][y]='^';} ///placement du troisieme sous marin
        if(j==3)
        {positio[x][y]='^';} ///placement du quatrieme sous marin
        }

    }
    }
    }
    }

void debut(char position1[15][15],char position2[15][15]) ///Sous programme permettant d'afficher le debut de la grille
{
    int i;
    printf("       A   B   C   D   E   F   G   H   I   J   K   L   M   N   O");
    printf("       ");
    printf("       A   B   C   D   E   F   G   H   I   J   K   L   M   N   O\n");
    for(i=0;i<31;i++)
    {
        quadrillage(position1,i); ///Appel sous programme pour afficher les deux matrices
        printf("    ");
        quadrillage(position2,i);
        printf("\n");
    }
}

void quadrillage(char positio[15][15],int index) ///Sous programme permettant de réaliser le quadrillage pour afficher les matrices
{
    if (index%2==0)
    {
       printf("     --------------------------------------------------------------");
    }
    else
    {
        int i=index/2;
        printf("%2d   | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | ",i, positio[i][0], positio[i][1], positio[i][2], positio[i][3], positio[i][4], positio[i][5], positio[i][6], positio[i][7], positio[i][8], positio[i][9], positio[i][10], positio[i][11], positio[i][12], positio[i][13], positio[i][14]);
    }



}

void randomdustunfest(int*r1,int*r2) ///Sous programme qui choisit aleatoirement un nombre entre 1 et 14 (pour les coordonnes du bateau)
{
    int i,nombre_aleatoire;
	i=rand()%(15);
	nombre_aleatoire=i;
	*r1=nombre_aleatoire;
	i=rand()%(15);
	nombre_aleatoire=i;
	*r2=nombre_aleatoire;

}
void randomhorizon(int*h) ///Sous programme qui tire soit 0 soit 1 pour choisir si le bateau sera vertical ou horizontal
{
    int i;
    i=rand()%2;
    *h=i;

}
void gotoligcol(int* lig, int* col) ///Sous programme gotolicol
{
    COORD mycoord;

    mycoord.X=col;
    mycoord.Y=lig;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),mycoord);
}
void vachette() ///Sous programme qui sert de curseur au niveau de la grille
{

    gotoligcol(2,8);
    {
    int l=2;
    int c=8;
    gotoligcol(l,c);
    char x;
    x=getch();
    while (1)
    {
    position(x,&l,&c);
    gotoligcol(l,c);
    x=getch();
    if ((l>30)||(c>65))
    {
        break;
    }
    }
    }
}
void position(char x, int* l, int* c) ///Sous programme qui dit au curseur quoi réaliser en fonction des touches saisies
{
  if((x=='z')||(x=='Z'))
  {
      *l=*l-2;
  }
  if((x=='s')||(x=='S'))
  {
      *l=*l+2;
  }
  if((x=='q')||(x=='Q'))
  {
      *c=*c-4;
  }
  if((x=='d')||(x=='D'))
  {
      *c=*c+4;
  }
}

void raz(char position[15][15]) ///sous programme qui permet la mise a zero des grilles au début de partie
{   int i,j;
    for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                position[i][j]=' '; ///mise a zéro des grilles
            }



        }
}

int victoire(char position[15][15],int* win) ///Sous programme vérifiant si un joueur a gagné ou non
{
    int i,j;
    for (i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if ((position[i][j]!=' ')&&(position[i][j]!='0')) ///S'il reste un bateau encore en vie alors continué
            {
                return 0;
            }

        }
    }
    printf("VICTOIRE\n"); ///Sinon afficher victoire
    *win=-1;
    return 0;


}




void deplacement(char position[15][15]) ///Sous programme permettant au joueur de se déplacer
{
    char choix,direction;
    int i,j,k,bouger=0;
    int verif;
    printf("\n\n\n\n\n");
    printf("Quel bateau souhaitez-vous deplacer Moussaillon?\n");
    scanf(" %c",&choix); ///Lecture du bateau que le joueur souhaite déplacer
    verif=1;
    do{
    if((choix=='C')||(choix=='R'))
    {
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(position[i][j]='A')
            {
                bouger=bouger+1;
            }
        }
    }
    if(bouger!=5)
    {
        verif=0;
    }
    }

    if(choix=='A')
    {
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(position[i][j]='A')
            {
                bouger=bouger+1;
            }
        }
    }
    if(bouger!=7)
    {
        verif=0;
    }
    }
    if((choix=='D')||(choix=='E')||(choix=='Y'))
    {
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(position[i][j]='A')
            {
                bouger=bouger+1;
            }
        }
    }
    if(bouger!=3)
    {
        verif=0;
    }
    }
    }while(verif==0);
    verif=1;
    do{
    printf("Quelle direction?\n");
    scanf(" %c",&direction); ///Lecture de la direction vers laquelle le joueur souhaite se déplacer
    switch(direction)
                {
                case 'Z': ///Si le joueur choisit de déplacer le bateau vers le haut
                {for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {if (position[i][j]==choix) ///Recherche dans la grille du bateau que le joueur souhaite déplacer
                {
                {if((position[i-1][j]==' ')&&(i-1>=0)) ///Si le bateau peut être déplacer alors le déplacer
                {
                position[i-1][j]=choix;
                position[i][j]=' ';
                }
                else ///sinon replacer le bateau ou il était
                {
                    for (i=14;i<=0;i--)
                    {for (j=14;j<=0;j--)
                    {if(position[i][j]==choix)
                    {
                        position[i+1][j]='A';
                        position[i][j]=' ';
                    }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                }
                break;
                }
            case 'S': ///de même pour si le joueur veut déplacer le bateau en bas
                {for(i=14;i>=0;i--)
                {for(j=14;j>=0;j--)
                {if (position[i][j]==choix)
                {
                {if((position[i+1][j]==' ')&&(i+1<15))
                {
                position[i+1][j]=choix;
                position[i][j]=' ';
                }
                else
                {

                    for (i=0;i<=14;i++)
                    {for(j=0;j<=14;j++)
                    {if(position[i][j]==choix)
                    {printf("[%d][%d]\n",i,j);

                        position[i-1][j]=choix;
                        position[i][j]=' ';
                    }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                }
                break;
                }
            case 'Q': ///De même pour si le joueur décide de déplacer le bateau à gauche
                {for(i=0;i<15;i++)
                {for(j=0;j<15;j++)
                {if (position[i][j]==choix)
                {if((position[i][j-1]==' ')&&(j-1>=0))
                {
                position[i][j-1]=choix;
                position[i][j]=' ';
                }
                else
                {
                    for (i=14;i<=0;i--)
                    {for (j=14;j<=0;j--)
                    {if(position[i][j]==choix)
                    {
                        position[i][j+1]=choix;
                        position[i][j]=' ';
                    }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                break;
                }
            case 'D': ///De même pour si le joueur décide de déplacer le bateau à gauche
                {for(i=14;i>=0;i--)
                {for(j=14;j>=0;j--)
                {if (position[i][j]==choix)
                {
                {if((position[i][j+1]==' ')&&(j+1<15))
                {
                position[i][j+1]=choix;
                position[i][j]=' ';
                }
                else
                {

                    for (i=0;i<15;i++)
                    {for (j=0;j<15;j++)
                     {if (position[i][j]==choix)
                       {
                        position[i][j-1]=choix;
                        position[i][j]=' ';
                       }
                    }
                    }
                    printf("ERREUR\n");
                    verif=0;
                }

                }
                }
                }
                }
                break;
                }
            default:
            {
              verif=0;
            }

    }
    }while(verif==0); ///Blindage si le joueur tape une autre valeur
}


void choix(char position[15][15],char position2[15][15],char position3[15][15],int* NbFus1, int* NbFus2, int* NbFus3) ///Sous programme ou le joueur choisit de tirer ou se déplacer
{
int choix,verif;
printf("Voulez-vous Tirer ou vous deplacer?\n");
printf("1.Tirer\n");
printf("2.Deplacer\n");
do{
scanf("%d",&choix);
if (choix==1) ///Le joueur choisit de tirer
{
    tirerjvj(position2,position3,&NbFus1,&NbFus2,&NbFus3); ///Appel du sous programme tirer
    verif=0;
}
if (choix==2) ///Le joueur choisir de se déplacer
{
    deplacement(position); ///Appel du sous programme déplacement
    verif=0;
}

}while(verif!=0);
}

void tirer(char position1[15][15],char position4[15][15], int* NbFus1, int* NbFus2, int* NbFus3)
{
    char bateau[10]={'S','T','U','V','C','R','D','E','Y','A'};
    int j;
    j=rand()%10;
    bateau[j];
    int i;
    int k;
            if(bateau[j]!= '0')
            printf("%c",bateau[j]);
            {
                int l;
                l=rand()%15;
                int p;
                p=rand()%15;

                if ((bateau[j]== 'D')||(bateau[j]=='E')||(bateau[j]=='Y'))
                {   printf("Ok1\n");
                  while (bateau=='D')
                    {   printf("Ok2\n");
                        *NbFus1++;
                    }
                    if(*NbFus1=1)
                    {
                        if(position1[l][p]!=' ')
                        {   printf("Ok3\n");
                            position4[l][p]='F';
                        }
                        else
                        {
                            position4[l][p]='X';
                        }
                        if(position1[l+1][p+1]!=' ')
                        {
                            position4[l+1][p+1]='F';
                        }
                        else
                        {
                            position4[l+1][p+1]='X';
                        }
                        if(position1[l][p+1]!=' ')
                        {
                            position4[l][p+1]='F';
                        }
                        else
                        {
                            position4[l][p+1]='X';
                        }
                        if(position1[l+1][p]!=' ')
                        {
                            position4[l+1][p]='F';
                        }
                        else
                        {
                            position4[l+1][p]='X';
                        }
                    }
                    while (bateau=='E')
                    {
                        *NbFus2++;
                    }
                    if(*NbFus2=1)
                    {
                        if(position1[l][p]!=' ')
                        {
                            position4[l][p]='F';
                        }
                        else
                        {
                            position4[l][p]='X';
                        }
                        if(position1[l+1][p+1]!=' ')
                        {
                            position4[l+1][p+1]='F';
                        }
                        else
                        {
                            position4[l+1][p+1]='X';
                        }
                        if(position1[l][p+1]!=' ')
                        {
                            position4[l][p+1]='F';
                        }
                        else
                        {
                            position4[l][p+1]='X';
                        }
                        if(position1[l+1][p]!=' ')
                        {
                            position4[l+1][p]='F';
                        }
                        else
                        {
                            position4[l+1][p]='X';
                        }
                    }
                    while (bateau=='Y')
                    {
                        *NbFus3++;
                    }
                    if(*NbFus3=1)
                    {
                        if(position1[l][p]!=' ')
                        {
                            position4[l][p]='F';
                        }
                        else
                        {
                            position4[l][p]='X';
                        }
                        if(position1[l+1][p+1]!=' ')
                        {
                            position4[l+1][p+1]='F';
                        }
                        else
                        {
                            position4[l+1][p+1]='X';
                        }
                        if(position1[l][p+1]!=' ')
                        {
                            position4[l][p+1]='F';
                        }
                        else
                        {
                            position4[l][p+1]='X';
                        }
                        if(position1[l+1][p]!=' ')
                        {
                            position4[l+1][p]='F';
                        }
                        else
                        {
                            position4[l+1][p]='X';
                        }
                    }
                    if ((*NbFus1!=1)||(*NbFus2!=1)||(*NbFus3!=1))
                    {
                        if((position1[l][p]!= ' ')&&(position1[l][p]!= '0')&&(position1[l][p]!= 'S')&&(position1[l][p]!= 'T')&&(position1[l][p]!= 'U')&&(position1[l][p]!= 'V'))
                {
                    position4[l][p]='0';
                }
                else
                {
                   position4[l][p]='X';
                   position1[l][p]='X';
                }
                    }
                }
                 if ((bateau[j]=='S')||(bateau[j]=='T')||(bateau[j]=='U')||(bateau[j]=='V'))
                {
                    printf("Ok4\n");
                    if(position1[l][p]!=' ')
                {   printf("Ok4.5\n");
                    position4[l][p]='0';
                }
                else
                {
                    printf("Ok5\n");
                   position4[l][p]='X';
                   position1[l][p]='X';
                }
                }
                if((bateau[j]=='C')||(bateau[j]=='R'))
                {   printf("Ok6\n");
                    if ((position1[l][p]!= ' ')&&(position1[l][p]!= '0')&&(position1[l][p]!= 'S')&&(position1[l][p]!= 'T')&&(position1[l][p]!= 'U')&&(position1[l][p]!= 'V'))
                    {printf("Ok7\n");
                        position4[l][p]='0';
                    }
                    else
                    {printf("Ok8\n");
                        position4[l][p]='X';
                        position1[l][p]='X';
                    }
                    if ((position1[l+1][p]!=' ')&&(position1[l+1][p]!='0')&&(position1[l+1][p]!= 'S')&&(position1[l+1][p]!= 'T')&&(position1[l+1][p]!= 'U')&&(position1[l+1][p]!= 'V'))
                    {printf("Ok9\n");
                        position4[l+1][p]='0';
                    }
                    else
                    {printf("Ok10\n");
                        position4[l+1][p]='X';
                        position1[l+1][p]='X';
                    }
                    if ((position1[l-1][p]!= ' ')&&(position1[l-1][p]!= '0')&&(position1[l-1][p]!= 'S')&&(position1[l-1][p]!= 'T')&&(position1[l-1][p]!= 'U')&&(position1[l-1][p]!= 'V'))
                    {printf("Ok11\n");
                        position4[l-1][p]='0';
                    }
                    else
                    {printf("Ok12\n");
                        position4[l-1][p]='X';
                        position1[l-1][p]='X';
                    }
                    if ((position1[l][p+1]!= ' ')&&(position1[l][p+1]!= '0')&&(position1[l][p+1]!= 'S')&&(position1[l][p+1]!= 'T')&&(position1[l][p+1]!= 'U')&&(position1[l][p+1]!= 'V'))
                    {printf("Ok13\n");
                        position4[l][p+1]='0';
                    }
                    else
                    {printf("Ok14\n");
                        position4[l][p+1]='X';
                        position1[l][p+1]='X';
                    }
                    if ((position1[l][p-1]!= ' ')&&(position1[l][p-1]!= '0')&&(position1[l][p-1]!= 'S')&&(position1[l][p-1]!= 'T')&&(position1[l][p-1]!= 'U')&&(position1[l][p-1]!= 'V'))
                    {printf("Ok15\n");
                        position4[l][p-1]='0';
                    }
                    else
                    {printf("Ok16\n");
                        position4[l][p-1]='X';
                        position1[l][p-1]='X';
                    }
                }
                if(bateau[j]=='A')
                {printf("Ok17\n");
                    if ((position1[l][p]!= ' ')&&(position1[l][p]!= '0')&&(position1[l][p]!= 'S')&&(position1[l][p]!= 'T')&&(position1[l][p]!= 'U')&&(position1[l][p]!= 'V'))
                    {printf("Ok18\n");
                        position4[l][p]='0';
                    }
                    else
                    {printf("Ok19\n");
                        position4[l][p]='X';
                        position1[l][p]='X';
                    }
                    if ((position1[l+1][p]!= ' ')&&(position1[l+1][p]!= '0')&&(position1[l+1][p]!= 'S')&&(position1[l+1][p]!= 'T')&&(position1[l+1][p]!= 'U')&&(position1[l+1][p]!= 'V'))
                    {printf("Ok20\n");
                        position4[l+1][p]='0';
                    }
                    else
                    {printf("Ok21\n");
                        position4[l+1][p]='X';
                        position1[l+1][p]='X';
                    }
                    if ((position1[l][p+1]!= ' ')&&(position1[l][p+1]!= '0')&&(position1[l][p+1]!= 'S')&&(position1[l][p+1]!= 'T')&&(position1[l][p+1]!= 'U')&&(position1[l][p+1]!= 'V'))
                    {printf("Ok22\n");
                        position4[l][p+1]='0';
                    }
                    else
                    {printf("Ok23\n");
                        position4[l][p+1]='X';
                        position1[l][p+1]='X';
                    }
                    if ((position1[l-1][p]!= ' ')&&(position1[l-1][p]!= '0')&&(position1[l-1][p]!= 'S')&&(position1[l-1][p]!= 'T')&&(position1[l-1][p]!= 'U')&&(position1[l-1][p]!= 'V'))
                    {printf("Ok24\n");
                        position4[l-1][p]='0';
                    }
                    else
                    {printf("Ok25\n");
                        position4[l-1][p]='X';
                        position1[l-1][p]='X';
                    }
                    if ((position1[l][p-1]!= ' ')&&(position1[l][p-1]!= '0')&&(position1[l][p-1]!= 'S')&&(position1[l][p-1]!= 'T')&&(position1[l][p-1]!= 'U')&&(position1[l][p-1]!= 'V'))
                    {printf("Ok26\n");
                        position4[l][p-1]='0';
                    }
                    else
                    {printf("Ok27\n");
                        position4[l][p-1]='X';
                        position1[l][p-1]='X';
                    }
                    if ((position1[l-1][p-1]!= ' ')&&(position1[l-1][p-1]!= '0')&&(position1[l-1][p-1]!= 'S')&&(position1[l-1][p-1]!= 'T')&&(position1[l-1][p-1]!= 'U')&&(position1[l-1][p-1]!= 'V'))
                    {printf("Ok28\n");
                        position4[l-1][p-1]='0';
                    }
                    else
                    {printf("Ok29\n");
                        position4[l-1][p-1]='X';
                        position1[l-1][p-1]='X';
                    }
                    if ((position1[l+1][p-1]!= ' ')&&(position1[l+1][p-1]!= '0')&&(position1[l+1][p-1]!= 'S')&&(position1[l+1][p-1]!= 'T')&&(position1[l+1][p-1]!= 'U')&&(position1[l+1][p-1]!= 'V'))
                    {printf("Ok30\n");
                        position4[l+1][p-1]='0';
                    }
                    else
                    {printf("Ok31\n");
                        position4[l+1][p-1]='X';
                        position1[l+1][p-1]='X';
                    }
                    if ((position1[l-1][p+1]!= ' ')&&(position1[l-1][p+1]!= '0')&&(position1[l-1][p+1]!= 'S')&&(position1[l-1][p+1]!= 'T')&&(position1[l-1][p+1]!= 'U')&&(position1[l-1][p+1]!= 'V'))
                    {printf("Ok32\n");
                        position4[l-1][p+1]='0';
                    }
                    else
                    {printf("Ok33\n");
                        position4[l-1][p+1]='X';
                        position1[l-1][p+1]='X';
                    }
                    if ((position1[l+1][p+1]!= ' ')&&(position1[l+1][p+1]!= '0')&&(position1[l+1][p+1]!= 'S')&&(position1[l+1][p+1]!= 'T')&&(position1[l+1][p+1]!= 'U')&&(position1[l+1][p+1]!= 'V'))
                    {printf("Ok34\n");
                        position4[l+1][p+1]='0';
                    }
                    else
                    {printf("Ok35\n");
                        position4[l+1][p+1]='X';
                        position1[l+1][p+1]='X';
                    }
                }
            }
        }

void tirerjvj(char position1[15][15],char position4[15][15], int* NbFus1, int* NbFus2, int* NbFus3)
{
    printf("allo\n");
    char bateau[11]={'S','T','U','V','C','R','D','E','Y','A'};
    int j;
    scanf("%d", &j);
                while((j<0)||(j>10))
                {
                    printf("recommencez\n");
                    scanf("%d", &j);
                }
    bateau[j];
    int i;
    int k;
            if(bateau[j]!= '0')
            {
                int l;
                scanf("%d", &l);
                while((l<0)||(l>15))
                {
                    printf("recommencez\n");
                    scanf("%d", &l);
                }
                int p;
                scanf("%d", &p);
                while((p<0)||(p>15))
                {
                    printf("recommencez\n");
                    scanf("%d", &p);
                }
                if ((bateau[j]== 'D')||(bateau[j]=='E')||(bateau[j]=='Y'))
                {
                  while (bateau=='D')
                    {
                        *NbFus1++;
                    }
                    if(*NbFus1=1)
                    {
                        if(position1[l][p]!=' ')
                        {
                            position4[l][p]='F';
                        }
                        else
                        {
                            position4[l][p]='X';
                        }
                        if(position1[l+1][p+1]!=' ')
                        {
                            position4[l+1][p+1]='F';
                        }
                        else
                        {
                            position4[l+1][p+1]='X';
                        }
                        if(position1[l][p+1]!=' ')
                        {
                            position4[l][p+1]='F';
                        }
                        else
                        {
                            position4[l][p+1]='X';
                        }
                        if(position1[l+1][p]!=' ')
                        {
                            position4[l+1][p]='F';
                        }
                        else
                        {
                            position4[l+1][p]='X';
                        }
                    }
                    while (bateau=='E')
                    {
                        *NbFus2++;
                    }
                    if(*NbFus2=1)
                    {
                        if(position1[l][p]!=' ')
                        {
                            position4[l][p]='F';
                        }
                        else
                        {
                            position4[l][p]='X';
                        }
                        if(position1[l+1][p+1]!=' ')
                        {
                            position4[l+1][p+1]='F';
                        }
                        else
                        {
                            position4[l+1][p+1]='X';
                        }
                        if(position1[l][p+1]!=' ')
                        {
                            position4[l][p+1]='F';
                        }
                        else
                        {
                            position4[l][p+1]='X';
                        }
                        if(position1[l+1][p]!=' ')
                        {
                            position4[l+1][p]='F';
                        }
                        else
                        {
                            position4[l+1][p]='X';
                        }
                    }
                    while (bateau=='Y')
                    {
                        *NbFus3++;
                    }
                    if(*NbFus3=1)
                    {
                        if(position1[l][p]!=' ')
                        {
                            position4[l][p]='F';
                        }
                        else
                        {
                            position4[l][p]='X';
                        }
                        if(position1[l+1][p+1]!=' ')
                        {
                            position4[l+1][p+1]='F';
                        }
                        else
                        {
                            position4[l+1][p+1]='X';
                        }
                        if(position1[l][p+1]!=' ')
                        {
                            position4[l][p+1]='F';
                        }
                        else
                        {
                            position4[l][p+1]='X';
                        }
                        if(position1[l+1][p]!=' ')
                        {
                            position4[l+1][p]='F';
                        }
                        else
                        {
                            position4[l+1][p]='X';
                        }
                    }
                    if ((*NbFus1!=1)||(*NbFus2!=1)||(*NbFus3!=1))
                    {
                        if((position1[l][p]!= ' ')&&(position1[l][p]!= '0')&&(position1[l][p]!= 'S')&&(position1[l][p]!= 'T')&&(position1[l][p]!= 'U')&&(position1[l][p]!= 'V'))
                {
                    position4[l][p]='0';
                }
                else
                {
                   position4[l][p]='X';
                   position1[l][p]='X';
                }
                    }
                }
                 if ((bateau[j]== 'S')||(bateau[j]=='T')||(bateau[j]=='U')||(bateau[j]=='V'))
                {
                    if((position1[l][p]!= ' ')&&(position1[l][p]!= '0'))
                {
                    position4[l][p]='0';
                }
                else
                {
                   position4[l][p]='X';
                   position1[l][p]='X';
                }
                }
                if((bateau[j]=='C')||(bateau[j]=='R'))
                {
                    if ((position1[l][p]!= ' ')&&(position1[l][p]!= '0')&&(position1[l][p]!= 'S')&&(position1[l][p]!= 'T')&&(position1[l][p]!= 'U')&&(position1[l][p]!= 'V'))
                    {
                        position4[l][p]='0';
                    }
                    else
                    {
                        position4[l][p]='X';
                        position1[l][p]='X';
                    }
                    if ((position1[l+1][p]!=' ')&&(position1[l+1][p]!='0')&&(position1[l+1][p]!= 'S')&&(position1[l+1][p]!= 'T')&&(position1[l+1][p]!= 'U')&&(position1[l+1][p]!= 'V'))
                    {
                        position4[l+1][p]='0';
                    }
                    else
                    {
                        position4[l+1][p]='X';
                        position1[l+1][p]='X';
                    }
                    if ((position1[l-1][p]!= ' ')&&(position1[l-1][p]!= '0')&&(position1[l-1][p]!= 'S')&&(position1[l-1][p]!= 'T')&&(position1[l-1][p]!= 'U')&&(position1[l-1][p]!= 'V'))
                    {
                        position4[l-1][p]='0';
                    }
                    else
                    {
                        position4[l-1][p]='X';
                        position1[l-1][p]='X';
                    }
                    if ((position1[l][p+1]!= ' ')&&(position1[l][p+1]!= '0')&&(position1[l][p+1]!= 'S')&&(position1[l][p+1]!= 'T')&&(position1[l][p+1]!= 'U')&&(position1[l][p+1]!= 'V'))
                    {
                        position4[l][p+1]='0';
                    }
                    else
                    {
                        position4[l][p+1]='X';
                        position1[l][p+1]='X';
                    }
                    if ((position1[l][p-1]!= ' ')&&(position1[l][p-1]!= '0')&&(position1[l][p-1]!= 'S')&&(position1[l][p-1]!= 'T')&&(position1[l][p-1]!= 'U')&&(position1[l][p-1]!= 'V'))
                    {
                        position4[l][p-1]='0';
                    }
                    else
                    {
                        position4[l][p-1]='X';
                        position1[l][p-1]='X';
                    }
                }
                if(bateau[j]=='A')
                {
                    if ((position1[l][p]!= ' ')&&(position1[l][p]!= '0')&&(position1[l][p]!= 'S')&&(position1[l][p]!= 'T')&&(position1[l][p]!= 'U')&&(position1[l][p]!= 'V'))
                    {
                        position4[l][p]='0';
                    }
                    else
                    {
                        position4[l][p]='X';
                        position1[l][p]='X';
                    }
                    if ((position1[l+1][p]!= ' ')&&(position1[l+1][p]!= '0')&&(position1[l+1][p]!= 'S')&&(position1[l+1][p]!= 'T')&&(position1[l+1][p]!= 'U')&&(position1[l+1][p]!= 'V'))
                    {
                        position4[l+1][p]='0';
                    }
                    else
                    {
                        position4[l+1][p]='X';
                        position1[l+1][p]='X';
                    }
                    if ((position1[l][p+1]!= ' ')&&(position1[l][p+1]!= '0')&&(position1[l][p+1]!= 'S')&&(position1[l][p+1]!= 'T')&&(position1[l][p+1]!= 'U')&&(position1[l][p+1]!= 'V'))
                    {
                        position4[l][p+1]='0';
                    }
                    else
                    {
                        position4[l][p+1]='X';
                        position1[l][p+1]='X';
                    }
                    if ((position1[l-1][p]!= ' ')&&(position1[l-1][p]!= '0')&&(position1[l-1][p]!= 'S')&&(position1[l-1][p]!= 'T')&&(position1[l-1][p]!= 'U')&&(position1[l-1][p]!= 'V'))
                    {
                        position4[l-1][p]='0';
                    }
                    else
                    {
                        position4[l-1][p]='X';
                        position1[l-1][p]='X';
                    }
                    if ((position1[l][p-1]!= ' ')&&(position1[l][p-1]!= '0')&&(position1[l][p-1]!= 'S')&&(position1[l][p-1]!= 'T')&&(position1[l][p-1]!= 'U')&&(position1[l][p-1]!= 'V'))
                    {
                        position4[l][p-1]='0';
                    }
                    else
                    {
                        position4[l][p-1]='X';
                        position1[l][p-1]='X';
                    }
                    if ((position1[l-1][p-1]!= ' ')&&(position1[l-1][p-1]!= '0')&&(position1[l-1][p-1]!= 'S')&&(position1[l-1][p-1]!= 'T')&&(position1[l-1][p-1]!= 'U')&&(position1[l-1][p-1]!= 'V'))
                    {
                        position4[l-1][p-1]='0';
                    }
                    else
                    {
                        position4[l-1][p-1]='X';
                        position1[l-1][p-1]='X';
                    }
                    if ((position1[l+1][p-1]!= ' ')&&(position1[l+1][p-1]!= '0')&&(position1[l+1][p-1]!= 'S')&&(position1[l+1][p-1]!= 'T')&&(position1[l+1][p-1]!= 'U')&&(position1[l+1][p-1]!= 'V'))
                    {
                        position4[l+1][p-1]='0';
                    }
                    else
                    {
                        position4[l+1][p-1]='X';
                        position1[l+1][p-1]='X';
                    }
                    if ((position1[l-1][p+1]!= ' ')&&(position1[l-1][p+1]!= '0')&&(position1[l-1][p+1]!= 'S')&&(position1[l-1][p+1]!= 'T')&&(position1[l-1][p+1]!= 'U')&&(position1[l-1][p+1]!= 'V'))
                    {
                        position4[l-1][p+1]='0';
                    }
                    else
                    {
                        position4[l-1][p+1]='X';
                        position1[l-1][p+1]='X';
                    }
                    if ((position1[l+1][p+1]!= ' ')&&(position1[l+1][p+1]!= '0')&&(position1[l+1][p+1]!= 'S')&&(position1[l+1][p+1]!= 'T')&&(position1[l+1][p+1]!= 'U')&&(position1[l+1][p+1]!= 'V'))
                    {
                        position4[l+1][p+1]='0';
                    }
                    else
                    {
                        position4[l+1][p+1]='X';
                        position1[l+1][p+1]='X';
                    }
                }
            }
        }

void deplacementIa (char position[15][15])
{
    char bateau[10]={'S','T','U','V','C','R','D','E','Y','A'};
    int j,r,i,k,bouger=0;
    int verif=1;
    do{
    if((bateau[k]=='C')||(bateau[k]=='R'))
    {
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(position[i][j]='A')
            {
                bouger=bouger+1;
            }
        }
    }
    if(bouger!=5)
    {
        verif=0;
    }
    }
    if(bateau[k]=='A')
    {
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(position[i][j]='A')
            {
                bouger=bouger+1;
            }
        }
    }
    if(bouger!=7)
    {
        verif=0;
    }
    }
    if((bateau[k]=='D')||(bateau[k]=='E')||(bateau[k]=='Y'))
    {
    for(i=0;i<15;i++)
    {
        for(j=0;j<15;j++)
        {
            if(position[i][j]='A')
            {
                bouger=bouger+1;
            }
        }
    }
    if(bouger!=3)
    {
        verif=0;
    }
    }
    }while(verif==0);
    verif=1;
    do{
    k=rand()%10;
    bateau[k];
    r=rand()%5;
    if (r==1)  ///s
    {
        for(i=14;i>=0;i--)
        {
            for(j=14;j>=0;j--)
            {
                if (position[i][j]==bateau[k])
                {
                    if((position[i+1][j]==' ')&&(i-1>=0))
                    {
                    position[i+1][j]=bateau[k];
                    position[i][j]=' ';
                    verif=1;
                    }
                    else
                    {
                        for(i=0;i<15;i++)
                        {
                            for(j=0;j<15;j++)
                            {
                                if(position[i][j]==bateau[j])
                                {
                                    position[i-1][j]=bateau[j];
                                    position[i][j]=' ';
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (r==2)
    {
        for(i=0;i<15;i++) ///Z
        {
            for(j=0;j<15;j++)
            {
                if (position[i][j]==bateau[k])
                {
                    if((position[i-1][j]==' ')&&(i-1>=0))
                    {
                    position[i-1][j]=bateau[k];
                    position[i][j]=' ';
                    verif=1;
                    }
                    else
                    {
                        for(i=14;i>=0;i--)
                        {
                            for(j=14;j>=0;j--)
                            {
                                if (position [i][j]==bateau[k])
                                {
                                    position[i+1][j]=bateau[k];
                                    position[i][j]=' ';

                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (r==3)
    {
        for(i=14;i>=0;i--)
        {
            for(j=14;j>=0;j--)
            {
                if (position[i][j]==bateau[k])
                {
                    if((position[i][j+1]==' ')&&(j+1>=0))
                    {
                    position[i][j+1]=bateau[k];
                    position[i][j]=' ';
                    verif=1;
                    }
                    else
                    {
                        for(i=0;i<15;i++)
                        {
                            for(j=0;j<15;j++)
                            {
                                if((position[i][j]==bateau[k]))
                                {
                                    position[i][j-1]=bateau[k];
                                    position[i][j]=' ';
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (r==4)
    {
        for(i=0;i<15;i++)
        {
            for(j=0;j<15;j++)
            {
                if (position[i][j]==bateau[k])
                {
                    if((position[i][j-1]==' ')&&(j-1>=0))
                    {
                    position[i][j-1]=bateau[k];
                    position[i][j]=' ';
                    verif=1;
                    }
                    else
                    {
                        for(i=14;i<=0;i--)
                        {
                            for(j=14;j<=0;j--)
                            {
                                if(position[i][j]==bateau[k])
                                {
                                    position[i][j+1]=bateau[k];
                                    position[i][j]=' ';
                                }
                            }
                        }
                    }

                }
            }
        }
    }
    }while(verif==0);
}
