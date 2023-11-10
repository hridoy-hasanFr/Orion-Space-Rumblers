#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

// Merging
typedef struct Node
{
    char All_info[10000];
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct NodeR
{
    char All_info[10000];
    struct Node *next;
} NodeR;


typedef struct NodeM
{
    char All_info[10000];
    struct Node *next;
} NodeM;

typedef struct NodeT
{
    char All_info[10000];
    struct Node *next;
} NodeT;


Node *ResearchI = NULL;
NodeR *bigbang = NULL;
NodeM *Artemis = NULL;
NodeT *Jamesweb = NULL;

typedef struct UserReg
{
    char Fname[50];
    char Lname[50];
    char Email[50];
    char username[50];
    char password[50];
} UserReg;

typedef struct UserLogin
{
    char userName[50];
    char password[50];
} login;



typedef struct Planet
{
    char pName[50];
    char pInfo[10000];
    char pData[10000];

    struct Planet * next;
} Planet;

Planet * Mercury = NULL;

typedef struct Nebula
{
    char name[50];
    char description[10000];
} neb;
typedef struct Galaxy
{
    char name[50];
    char description[10000];
} gal;


void Design()
{
    printf("\n");
    printf("\n");


    printf("\t\t\t  *  .       .  *          .  *   .   .  .   * .  *   .   *  .   .  \n");
    printf("\t\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t\t        .     .  *    .     * .  *   .  *    .   *  .  *    .   *    \n");
    printf("\t\t\t* .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t\t   . *       .  *    .     .  *   .   .  .   * .  *   .   *  .   .  \n");

    printf("\n\n");
    printf("\t\t\t  .*    .     .  *    .     * .  *   .  *    .   *  .  *    .   .    \n");
    printf("\t\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t\t        .     .  *    .     * .  *   .  *    .    *  .   *  .  .  .\n");
    printf("\t\t\t   .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   *  \n");
    printf("\t\t\t*.      *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t\t    *       .  *          .  *   .   .  .   * .  *   .   *  .   *  \n");

    printf("\n\t\t\t\tYour portal to the universe awaits.\n");
    printf("\t\t\t\tExplore the cosmos and reach for the stars.\n\n");
}


// New adding


void research()
{
    bigbang = (NodeR*)malloc(sizeof(NodeR));
    NodeR*Aurora = (NodeR*)malloc(sizeof(NodeR));
    NodeR*Sagan = (NodeR*)malloc(sizeof(NodeR));
    NodeR*Gravitational = (NodeR*)malloc(sizeof(NodeR));

    //Bigbang

    strcpy(bigbang->All_info," The Big Bang event is a physical theory that\n");
    strcat(bigbang->All_info,"\t\t\t\t  describes how the universe expanded from an\n");
    strcat(bigbang->All_info,"\t\t\t\t  initial state of high density and temperature.\n");
    strcat(bigbang->All_info,"\t\t\t\t  [1] Various cosmological models of the Big\n");
    strcat(bigbang->All_info,"\t\t\t\t  Bang explain the evolution of the observable\n");
    strcat(bigbang->All_info,"\t\t\t\t  universe from the earliest known periods\n");
    strcat(bigbang->All_info,"\t\t\t\t  through its subsequent large-scale form.\n");
    strcat(bigbang->All_info,"\t\t\t\t  [2][3][4] These models offer a comprehensive \n");
    strcat(bigbang->All_info,"\t\t\t\t  explanation for a broad range of observed\n");
    strcat(bigbang->All_info,"\t\t\t\t  phenomena, including the abundance of light\n");
    strcat(bigbang->All_info,"\t\t\t\t  elements, the cosmic microwave background\n");
    strcat(bigbang->All_info,"\t\t\t\t  (CMB) radiation, and large-scale structure. The\n");
    strcat(bigbang->All_info,"\t\t\t\t  overall uniformity of the Universe, known as\n");
    strcat(bigbang->All_info,"\t\t\t\t  the flatness problem, is explained through\n");
    strcat(bigbang->All_info,"\t\t\t\t  cosmic inflation: a sudden and very rapid\n");
    strcat(bigbang->All_info,"\t\t\t\t  expansion of space during the earliest\n");
    strcat(bigbang->All_info,"\t\t\t\t  moments. However, physics currently lacks a \n");
    strcat(bigbang->All_info,"\t\t\t\t  widely accepted theory of quantum gravity\n");
    strcat(bigbang->All_info,"\t\t\t\t  that can successfully model the earliest\n");
    strcat(bigbang->All_info,"\t\t\t\t  conditions of the Big Bang.\n");

    //Aurora

    strcpy(Aurora->All_info," An aurora is a natural light display that\n");
    strcat(Aurora->All_info,"\t\t\t\t  shimmers in the sky. Blue, red, yellow, green,\n");
    strcat(Aurora->All_info,"\t\t\t\t  and orange lights shift gently and change \n");
    strcat(Aurora->All_info,"\t\t\t\t  shape like softly blowing curtains. Auroras are\n");
    strcat(Aurora->All_info,"\t\t\t\t  only visible at night, and usually only appear\n");
    strcat(Aurora->All_info,"\t\t\t\t  in lower polar regions.Auroras are visible\n");
    strcat(Aurora->All_info,"\t\t\t\t  almost every night near the Arctic and \n");
    strcat(Aurora->All_info,"\t\t\t\t  Antarctic Circles, which are about 66.5\n");
    strcat(Aurora->All_info,"\t\t\t\t  degrees north and south of the Equator. In the\n");
    strcat(Aurora->All_info,"\t\t\t\t  north, the display is called aurora borealis, or\n");
    strcat(Aurora->All_info,"\t\t\t\t  northern lights. In the south, it is called aurora\n");
    strcat(Aurora->All_info,"\t\t\t\t  australis, or southern lights.\n");

    //Sagan

    strcpy(Sagan->All_info," This is a hypothesis which states that the\n");
    strcat(Sagan->All_info,"\t\t\t\t  popularity of a scientist among the general\n");
    strcat(Sagan->All_info,"\t\t\t\t  public is inversely proportional to his\n");
    strcat(Sagan->All_info,"\t\t\t\t  scientific accomplishment. That is, a scientist\n");
    strcat(Sagan->All_info,"\t\t\t\t  who spends too much effort making science\n");
    strcat(Sagan->All_info,"\t\t\t\t  popular among the masses is believed to be\n");
    strcat(Sagan->All_info,"\t\t\t\t  one whose scientific work is not the best. The\n");
    strcat(Sagan->All_info,"\t\t\t\t  Sagan effect is named after American\n");
    strcat(Sagan->All_info,"\t\t\t\t  science among Americans through the famous\n");
    strcat(Sagan->All_info,"\t\t\t\t  1980 science television series Cosmos .\n");
    strcat(Sagan->All_info,"\t\t\t\t  Sagan, a prolific scientist with several\n");
    strcat(Sagan->All_info,"\t\t\t\t  scientific papers to his name, suffered various\n");
    strcat(Sagan->All_info,"\t\t\t\t  professional setbacks because fellow\n");
    strcat(Sagan->All_info,"\t\t\t\t  scientists thought a science popularizer could\n");
    strcat(Sagan->All_info,"\t\t\t\t  not be a serious scientist.\n");



    // Gravitational

    strcpy(Gravitational->All_info," Gravitational lensing occurs when a massive\n");
    strcat(Gravitational->All_info,"\t\t\t\t  celestial body, such as a galaxy cluster,\n");
    strcat(Gravitational->All_info,"\t\t\t\t  causes a sufficient curvature of spacetime for\n");
    strcat(Gravitational->All_info,"\t\t\t\t  the path of light around it to be visibly bent, as\n");
    strcat(Gravitational->All_info,"\t\t\t\t  if by a lens. The body causing the light to\n");
    strcat(Gravitational->All_info,"\t\t\t\t  curve is,accordingly,y called a gravitational\n");
    strcat(Gravitational->All_info,"\t\t\t\t  lens. According to Einstein’s general theory of\n");
    strcat(Gravitational->All_info,"\t\t\t\t  relativity, time and space are fused together in\n");
    strcat(Gravitational->All_info,"\t\t\t\t  a quantity known as spacetime. Within this\n");
    strcat(Gravitational->All_info,"\t\t\t\t  theory, massive objects cause spacetime to\n");
    strcat(Gravitational->All_info,"\t\t\t\t  curve, and gravity is simply the curvature of\n");
    strcat(Gravitational->All_info,"\t\t\t\t  spacetime. As light travels through spacetime,\n");
    strcat(Gravitational->All_info,"\t\t\t\t  the theory predicts that the path taken by the\n");
    strcat(Gravitational->All_info,"\t\t\t\t  light will also be curved by an object’s mass.\n");
    strcat(Gravitational->All_info,"\t\t\t\t  Gravitational lensing is a dramatic and\n");
    strcat(Gravitational->All_info,"\t\t\t\t  observable example of Einstein’s theory in \n");
    strcat(Gravitational->All_info,"\t\t\t\t  action. Extremely massive celestial bodies,\n");
    strcat(Gravitational->All_info,"\t\t\t\t  such as galaxy clusters, cause spacetime to\n");
    strcat(Gravitational->All_info,"\t\t\t\t  be significantly curved. In other words, they \n");
    strcat(Gravitational->All_info,"\t\t\t\t  act as gravitational lenses. When light from a \n");
    strcat(Gravitational->All_info,"\t\t\t\t  more distant light source passes by a\n");
    strcat(Gravitational->All_info,"\t\t\t\t  gravitational lens, the path of the light is \n");
    strcat(Gravitational->All_info,"\t\t\t\t  curved, and a distorted image of the distant \n");
    strcat(Gravitational->All_info,"\t\t\t\t  object—maybe a ring or halo of light around \n");
    strcat(Gravitational->All_info,"\t\t\t\t  the gravitational lens—can be observed. \n");

    bigbang->next = Aurora;
    Aurora->next = Sagan;
    Sagan->next = Gravitational;
    Gravitational->next = NULL;
}

void mission()
{
    Artemis = (NodeM*)malloc(sizeof(NodeM));
    NodeM * Apollo = (NodeM*)malloc(sizeof(NodeM));
    NodeM * Voyager = (NodeM*)malloc(sizeof(NodeM));
    NodeM * ISS = (NodeM*)malloc(sizeof(NodeM));


    strcpy(Artemis->All_info,"The Artemis program is a robotic and human \n");
    strcat( Artemis->All_info,"\t\t\t\t  Moon exploration program led by the United \n");
    strcat( Artemis->All_info,"\t\t\t\t  States' National Aeronautics and Space \n");
    strcat( Artemis->All_info,"\t\t\t\t  Administration (NASA) along with six major\n");
    strcat( Artemis->All_info,"\t\t\t\t  partner agencies— the European Space \n");
    strcat( Artemis->All_info,"\t\t\t\t  Agency (ESA), the German Aerospace Center \n");
    strcat( Artemis->All_info,"\t\t\t\t  (DLR), the Japan Aerospace Exploration \n");
    strcat( Artemis->All_info,"\t\t\t\t  Agency (JAXA), the Canadian Space Agency \n");
    strcat( Artemis->All_info,"\t\t\t\t  (CSA), the Israel Space Agency (ISA), and the \n");
    strcat( Artemis->All_info,"\t\t\t\t  Italian Space Agency (ASI).[9][10][11] The \n");
    strcat( Artemis->All_info,"\t\t\t\t  Artemis program is intended to reestablish a \n");
    strcat( Artemis->All_info,"\t\t\t\t  human presence on the Moon for the first time \n");
    strcat( Artemis->All_info,"\t\t\t\t  since the Apollo 17 mission in 1972. The main \n");
    strcat( Artemis->All_info,"\t\t\t\t  parts of the program are the Space Launch \n");
    strcat( Artemis->All_info,"\t\t\t\t  System (SLS), the Orion spacecraft, the Lunar \n");
    strcat( Artemis->All_info,"\t\t\t\t  Gateway space station, and the commercial \n");
    strcat( Artemis->All_info,"\t\t\t\t  Human Landing Systems. The program's \n");
    strcat( Artemis->All_info,"\t\t\t\t  long-term goal is to establish a permanent\n");
    strcat( Artemis->All_info,"\t\t\t\t  base on the Moon to facilitate the feasibility of \n");
    strcat( Artemis->All_info,"\t\t\t\t  human missions to Mars.\n");


    strcpy(Apollo->All_info,"Apollo 11 (July 16–24, 1969) was the American \n");
    strcat(Apollo->All_info,"\t\t\t\t  spaceflight that first landed humans on the \n");
    strcat(Apollo->All_info,"\t\t\t\t  Moon. Commander Neil Armstrong and Lunar \n");
    strcat(Apollo->All_info,"\t\t\t\t  Module Pilot Buzz Aldrin landed the Apollo \n");
    strcat(Apollo->All_info,"\t\t\t\t  Lunar Module Eagle on July 20, 1969, at 20:17 \n");
    strcat(Apollo->All_info,"\t\t\t\t  UTC, and Armstrong became the first person \n");
    strcat(Apollo->All_info,"\t\t\t\t  to step onto the Moon's surface six hours and \n");
    strcat(Apollo->All_info,"\t\t\t\t  39 minutes later, on July 21 at 02:56 UTC. \n");
    strcat(Apollo->All_info,"\t\t\t\t  Aldrin joined him 19 minutes later, and they \n");
    strcat(Apollo->All_info,"\t\t\t\t  spent about two and a quarter hours together\n");
    strcat(Apollo->All_info,"\t\t\t\t  exploring the site they had named Tranquility \n");
    strcat(Apollo->All_info,"\t\t\t\t  Base upon landing. Armstrong and Aldrin \n");
    strcat(Apollo->All_info,"\t\t\t\t  collected 47.5 pounds (21.5 kg) of lunar \n");
    strcat(Apollo->All_info,"\t\t\t\t  material to bring back to Earth as pilot Michael \n");
    strcat(Apollo->All_info,"\t\t\t\t  Collins flew the Command Module Columbia in \n");
    strcat(Apollo->All_info,"\t\t\t\t  lunar orbit, and were on the Moon's surface \n");
    strcat(Apollo->All_info,"\t\t\t\t  for 21 hours, 36 minutes before lifting off to \n");
    strcat(Apollo->All_info,"\t\t\t\t  rejoin Columbia.\n");


    strcpy( Voyager->All_info,"Voyager 1 is a space probe launched by NASA\n");
    strcat( Voyager->All_info,"\t\t\t\t  on September 5, 1977, as part of the Voyager\n");
    strcat( Voyager->All_info,"\t\t\t\t  program to study the outer Solar System and \n");
    strcat( Voyager->All_info,"\t\t\t\t  interstellar space beyond the Sun's \n");
    strcat( Voyager->All_info,"\t\t\t\t  heliosphere. Launched 16 days after its twin\n");
    strcat( Voyager->All_info,"\t\t\t\t  Voyager 2, Voyager 1 has been operating for \n");
    strcat( Voyager->All_info,"\t\t\t\t  46 years, 1 month and 21 days as of October \n");
    strcat( Voyager->All_info,"\t\t\t\t  27, 2023 UTC [refresh]. It communicates \n");
    strcat( Voyager->All_info,"\t\t\t\t  through the NASA Deep Space Network to \n");
    strcat( Voyager->All_info,"\t\t\t\t  receive routine commands and to transmit \n");
    strcat( Voyager->All_info,"\t\t\t\t  data to Earth. Real-time distance and velocity \n");
    strcat( Voyager->All_info,"\t\t\t\t  data is provided by NASA and JPL.[5] At a \n");
    strcat( Voyager->All_info,"\t\t\t\t  distance of 161 AU (24 billion km; 15 billion \n");
    strcat( Voyager->All_info,"\t\t\t\t  mi) from Earth as of August 2023,[5] it is the \n");
    strcat( Voyager->All_info,"\t\t\t\t  most distant human-made object from Earth.\n");


    strcpy(ISS->All_info,"The International Space Station (ISS) is the \n");
    strcat( ISS->All_info,"\t\t\t\t  largest modular space station in low Earth \n");
    strcat( ISS->All_info,"\t\t\t\t  orbit. The project involves five space \n");
    strcat( ISS->All_info,"\t\t\t\t  agencies: the United States' NASA, Russia's \n");
    strcat( ISS->All_info,"\t\t\t\t  Roscosmos, Japan's JAXA, Europe's ESA, \n");
    strcat( ISS->All_info,"\t\t\t\t  and Canada's CSA.[11][12] The ownership and \n");
    strcat( ISS->All_info,"\t\t\t\t  use of the space station is established by\n");
    strcat( ISS->All_info,"\t\t\t\t  intergovernmental treaties and \n");
    strcat( ISS->All_info,"\t\t\t\t  agreements.[13] The station serves as a \n");
    strcat( ISS->All_info,"\t\t\t\t  microgravity and space environment research \n");
    strcat( ISS->All_info,"\t\t\t\t  laboratory in which scientific research is \n");
    strcat( ISS->All_info,"\t\t\t\t  conducted in astrobiology, astronomy, \n");
    strcat( ISS->All_info,"\t\t\t\t  meteorology, physics, and other fields.\n");
    strcat( ISS->All_info,"\t\t\t\t  The ISS is suited for testing the spacecraft \n");
    strcat( ISS->All_info,"\t\t\t\t  systems and equipment required for possible \n");
    strcat( ISS->All_info,"\t\t\t\t  future long-duration missions to the Moon and\n");
    strcat( ISS->All_info,"\t\t\t\t  Mars.\n");


    Artemis->next = Apollo;
    Apollo->next = Voyager;
    Voyager->next = ISS;
    ISS->next = NULL;
}



void telescope()
{
    Jamesweb = (NodeT*)malloc(sizeof(NodeT));
    NodeT *  Hubble = (NodeT*)malloc(sizeof(NodeT));
    NodeT * Spitzer = (NodeT*)malloc(sizeof(NodeT));

    //James web
    strcpy(Jamesweb->All_info," The James Webb Space Telescope (JWST) is a\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  space telescope designed to conduct infrared\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  astronomy. Its high-resolution and\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  high-sensitivity instruments allow it to view\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  objects too old, distant, or faint for the Hubble \n");
    strcat(Jamesweb->All_info,"\t\t\t\t  Space Telescope.[9] This enables investigations\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  across many fields of astronomy and cosmology,\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  such as observation of the first stars and the formation\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  of the first galaxies, and detailed atmospheric\n");
    strcat(Jamesweb->All_info,"\t\t\t\t  characterization of potentially habitable exoplanets.[10][11][12].\n");

    // Hubble
    strcpy(Hubble->All_info," The Hubble Space Telescope (often referred to\n");
    strcat(Hubble->All_info,"\t\t\t\t  as HST or Hubble) is a space telescope that \n");
    strcat(Hubble->All_info,"\t\t\t\t  was launched into low Earth orbit in 1990 and \n");
    strcat(Hubble->All_info,"\t\t\t\t  remains in operation. It was not the first space\n");
    strcat(Hubble->All_info,"\t\t\t\t  telescope, but it is one of the largest and most\n");
    strcat(Hubble->All_info,"\t\t\t\t  versatile, renowned both as a vital research\n");
    strcat(Hubble->All_info,"\t\t\t\t  tool and as a public relations boon for\n");
    strcat(Hubble->All_info,"\t\t\t\t  astronomy. The Hubble telescope is named\n");
    strcat(Hubble->All_info,"\t\t\t\t  after astronomer Edwin Hubble and is one of\n");
    strcat(Hubble->All_info,"\t\t\t\t  NASA's Great Observatories. The Space\n");
    strcat(Hubble->All_info,"\t\t\t\t  Telescope Science Institute (STScI) selects \n");
    strcat(Hubble->All_info,"\t\t\t\t  Hubble's targets and processes the resulting\n");
    strcat(Hubble->All_info,"\t\t\t\t  data, while the Goddard Space Flight Center\n");
    strcat(Hubble->All_info,"\t\t\t\t  (GSFC) controls the spacecraft.\n");


    //Spitzer

    strcpy(Spitzer->All_info," Spitzer was the final mission in NASA's Great\n");
    strcat(Spitzer->All_info,"\t\t\t\t  Observatories Program - a family of four \n");
    strcat(Spitzer->All_info,"\t\t\t\t  space-based observatories, each observing\n");
    strcat(Spitzer->All_info,"\t\t\t\t  the Universe in a different kind of light, namely\n");
    strcat(Spitzer->All_info,"\t\t\t\t  the visible-light Hubble Space Telescope, the\n");
    strcat(Spitzer->All_info,"\t\t\t\t  Compton Gamma-Ray Observatory, and the\n");
    strcat(Spitzer->All_info,"\t\t\t\t  Chandra X-Ray Observatory. Spitzer was\n");
    strcat(Spitzer->All_info,"\t\t\t\t  designed to detect infrared radiation, which is\n");
    strcat(Spitzer->All_info,"\t\t\t\t  primarily heat radiation, and allow us to peer \n");
    strcat(Spitzer->All_info,"\t\t\t\t  into regions of space that are hidden from\n");
    strcat(Spitzer->All_info,"\t\t\t\t  optical telescopes.NASA's Spitzer was the \n");
    strcat(Spitzer->All_info,"\t\t\t\t  first telescope to detect light from an\n");
    strcat(Spitzer->All_info,"\t\t\t\t  exoplanet, or a planet outside our solar\n");
    strcat(Spitzer->All_info,"\t\t\t\t  system. Spitzer uses an ultra-sensitive\n");
    strcat(Spitzer->All_info,"\t\t\t\t  infrared telescope to study asteroids, comets,\n");
    strcat(Spitzer->All_info,"\t\t\t\t  planets and distant galaxies.\n");

    Jamesweb->next = Hubble;
    Hubble->next = Spitzer;
    Spitzer->next = NULL;
}


void displayRechInfo(int n)
{
    system("cls");
    char op;
    NodeR * temp = bigbang;
    for(int i = 1; i < n; i++)
    {
        temp = temp->next;
    }

    Design();
    printf("\n\t\t\t\t %s",temp->All_info);

    printf("\n\t\t\t\t  >>Enter any key to return back : ");
    getch();
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }
}

void displayMissionInfo(int n)
{
    system("cls");
    char op;
    NodeM * temp = Artemis;
    for(int i = 1; i < n; i++)
    {
        temp = temp->next;
    }

    Design();
    printf("\n\t\t\t\t %s",temp->All_info);

    printf("\n\t\t\t\t  >>Enter any key to return back : ");
    getch();
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }
}


void displayTelescopeInfo(int n)
{
    system("cls");
    char op;
    NodeT * temp = Jamesweb;
    for(int i = 1; i < n; i++)
    {
        temp = temp->next;
    }
    Design();
    printf("\n\t\t\t\t %s",temp->All_info);
    printf("\n\t\t\t\t  >>Enter any key to return back : ");
    getch();
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }
}


void search(int n)
{
    fflush(stdin);
    system("cls");
    Design();
    Node *temp = ResearchI;
    for (int i = 1; i < n; i++)
    {
        temp = temp->next;
    }

    if(n == 1)
    {
        int op;
        while(true)
        {
            research();
            system("cls");
            Design();
            printf("\n\t\t\t\t  %s", temp->All_info);
            fflush(stdin);
            printf("\n\t\t\t\t  Or press '0' to return back : ");
            scanf("%d", &op);
            if (op == 1)
            {
                displayRechInfo(1);
            }
            else if(op == 2)
            {
                displayRechInfo(2);
            }
            else if(op == 3)
            {
                displayRechInfo(3);
            }
            else if(op == 4)
            {
                displayRechInfo(4);
            }
            else if(op == 0)
            {
                return;
            }
        }
        getch();
    }

    if(n == 2)
    {
        int op;
        while(true)
        {
            mission();
            system("cls");
            Design();
            printf("\n\t\t\t\t  %s", temp->All_info);
            fflush(stdin);
            printf("\n\t\t\t\t  Or press '0' to return back : ");
            scanf("%d", &op);
            if (op == 1)
            {
                displayMissionInfo(1);
            }
            else if(op == 2)
            {
                displayMissionInfo(2);
            }
            else if(op == 3)
            {
                displayMissionInfo(3);
            }
            else if(op == 4)
            {
                displayMissionInfo(4);
            }
            else if(op == 0)
            {
                return;
            }
        }
        getch();
    }


    if(n == 3)
    {
        int op;
        while(true)
        {
            telescope();
            system("cls");
            Design();
            printf("\n\t\t\t\t  %s", temp->All_info);

            fflush(stdin);
            printf("\n\t\t\t\t  Or press '0' to return back : ");
            scanf("%d", &op);
            if (op == 1)
            {
                displayTelescopeInfo(1);
            }
            else if(op == 2)
            {
                displayTelescopeInfo(2);
            }
            else if(op == 3)
            {
                displayTelescopeInfo(3);
            }
            else if(op == 0)
            {
                return;
            }
        }
        getch();
    }


}

void researchAndMission()
{
    ResearchI = (Node *)malloc(sizeof(Node));
    Node *MissionI = (Node *)malloc(sizeof(Node));
    Node *TelescopeI = (Node *)malloc(sizeof(Node));

    strcpy(ResearchI->All_info, "\n\t\t\t\t  1.Big Bang Theory.\n\t\t\t\t  2.Aurora.\n\t\t\t\t  3.Sagan Effects.\n\t\t\t\t  4.Gravitational Lensing.\n\n\t\t\t\t  Enter your choice >> ");
    strcpy(MissionI->All_info, "\n\t\t\t\t  1.Artemis program.\n\t\t\t\t  2.Apollo II.\n\t\t\t\t  3.Voyager 1.\n\t\t\t\t  4.The International Space Station (ISS).\n\n\t\t\t\t  Enter your choice >> ");
    strcpy(TelescopeI->All_info, "\n\t\t\t\t  1.James Webb Space Telescope.\n\t\t\t\t  2.The Hubble Space Telescope.\n\t\t\t\t  3.Spitzer Space Telescope.\n\n\t\t\t\t Enter your choice >> ");

    ResearchI->prev = NULL;
    ResearchI->next = MissionI;

    MissionI->prev = ResearchI;
    MissionI->next = TelescopeI;

    TelescopeI->prev = MissionI;
    TelescopeI->next = NULL;

    int op;
    while (1)
    {
        system("cls");
        Design();
        printf("\n\t\t\t\t  1.Research \n");
        printf("\n\t\t\t\t  2.Mission \n");
        printf("\n\t\t\t\t  3.Telescope \n");
        printf("\n\t\t\t\t  >>Enter your choice");
        printf("\n\t\t\t\t  Or press '0' to return back :");
        scanf("%d", &op);
        if (op == 1)
        {
            search(1);
        }
        else if(op == 2)
        {
            search(2);
        }
        else if(op == 3)
        {
            search(3);
        }
        else if(op == 0)
        {
            return;
        }
    }
}


// New end


void displayNebulaInfo(neb nebula)
{
    getchar();
    system("cls");
    Design();
    printf("\t\t\t\t  Name: %s\n\n", nebula.name);
    printf("\t\t\t\t  Description: %s\n\n", nebula.description);
    char op;
    printf("\t\t\t\t  >> Press '0' to return back : ");
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }
}
void displayGalaxyInfo(gal galaxy)
{
    getchar();
    system("cls");
    Design();
    printf("\t\t\t\t  Name: %s\n\n", galaxy.name);
    printf("\t\t\t\t  Description: %s\n\n", galaxy.description);
    char op;
    printf("\t\t\t\t  >> Press '0' to return back : ");
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }
}

//void Display()
//{
//    Planet * temp = Mercury;
//    while(temp != NULL)
//    {
//        printf("\n%s \n%s\n",temp->pInfo,temp->pData);
//        temp = temp->next;
//    }
//}



void Info_of_planet()
{

    Mercury = (Planet*)malloc(sizeof(Planet));
    Planet * Venus = (Planet*)malloc(sizeof(Planet));
    Planet * Earth = (Planet*)malloc(sizeof(Planet));
    Planet * Mars = (Planet*)malloc(sizeof(Planet));
    Planet * Jupiter = (Planet*)malloc(sizeof(Planet));
    Planet * Saturn = (Planet*)malloc(sizeof(Planet));
    Planet * Uranus = (Planet*)malloc(sizeof(Planet));
    Planet * Neptune = (Planet*)malloc(sizeof(Planet));

    //Mercury info
    strcpy(Mercury->pName,"Murcury");
    strcpy(Mercury->pInfo,"\t\t\t\t  Planet Name : Mercury\n\n");
    strcat(Mercury->pInfo,"\t\t\t\t  Mercury is the first planet from the Sun and the\n");
    strcat(Mercury->pInfo,"\t\t\t\t  smallest in the solar system. It is a terrestrial\n");
    strcat(Mercury->pInfo,"\t\t\t\t  planet with a heavily cratered surface due to \n");
    strcat(Mercury->pInfo,"\t\t\t\t  overlapping impact events. These features are\n");
    strcat(Mercury->pInfo,"\t\t\t\t  well preserved since the plane has no geological\n");
    strcat(Mercury->pInfo,"\t\t\t\t  activity and an extremely tenuous atmosphere called\n");
    strcat(Mercury->pInfo,"\t\t\t\t  an exosphere.\n");


    strcpy(Mercury->pData,"\t\t\t\t  Orbital period : 88 days.\n");
    strcat(Mercury->pData,"\t\t\t\t  Length of day  : 59d 0h 0m.\n");
    strcat(Mercury->pData,"\t\t\t\t  Radius         : 2,439.7 km.\n");
    strcat(Mercury->pData,"\t\t\t\t  Mass           : 3.285 x 10^23 kg.\n");
    strcat(Mercury->pData,"\t\t\t\t  Gravity        : 3.7 m/s^2.\n");
    strcat(Mercury->pData,"\t\t\t\t  Surface area   : 74.8 million km^2.\n");
    strcat(Mercury->pData,"\t\t\t\t  Distance from the sun : 58 million km.\n");

    // Venus info
    strcpy(Venus->pName,"Venus");
    strcpy(Venus->pName,"Murcury");
    strcpy(Venus->pInfo,"\t\t\t\t  Planet Name : Venus\n\n");
    strcat(Venus->pInfo,"\t\t\t\t  Venus is the second planet from the Sun. It is a rocky\n");
    strcat(Venus->pInfo,"\t\t\t\t  planet with the densest atmosphere of all the rocky\n");
    strcat(Venus->pInfo,"\t\t\t\t  bodies in the Solar System and the only one with a mass \n");
    strcat(Venus->pInfo,"\t\t\t\t  and size that are close to those of its orbital neighbor, Earth.\n");
    strcat(Venus->pInfo,"\t\t\t\t  well preserved since the plane has no geological\n");



    strcpy(Venus->pData,"\t\t\t\t  Orbital period : 225 days.\n");
    strcat(Venus->pData,"\t\t\t\t  Length of day  : 243d 0h 0m.\n");
    strcat(Venus->pData,"\t\t\t\t  Radius         : 6,051.8 km..\n");
    strcat(Venus->pData,"\t\t\t\t  Mass           : 4.867 x 10^24 kg.\n");
    strcat(Venus->pData,"\t\t\t\t  Gravity        : 3.7 m/s^2.\n");
    strcat(Venus->pData,"\t\t\t\t  Surface area   : 460.2 million km^2.\n");
    strcat(Venus->pData,"\t\t\t\t  Distance from the sun : 108.2 million km.\n");

    //Earth info
    strcpy(Earth->pName,"Earth");
    strcpy(Earth->pName,"Murcury");
    strcpy(Earth->pInfo,"\t\t\t\t  Planet Name : Earth\n\n");
    strcat(Earth->pInfo,"\t\t\t\t  Earth, our home planet, is a world unlike any other.\n");
    strcat(Earth->pInfo,"\t\t\t\t  The third planet from the sun, Earth, is the only\n");
    strcat(Earth->pInfo,"\t\t\t\t  place in the known universe confirmed to host life.\n");
    strcat(Earth->pInfo,"\t\t\t\t  With a radius of 3,959 miles, Earth is the fifth largest\n");
    strcat(Earth->pInfo,"\t\t\t\t  planet in our solar system, and it's the only one known\n");
    strcat(Earth->pInfo,"\t\t\t\t  for sure to have liquid water on its surface.\n");


    strcpy(Earth->pData,"\t\t\t\t  Orbital period : 365 days.\n");
    strcat(Earth->pData,"\t\t\t\t  Length of day  : 1d 0h 0m.\n");
    strcat(Earth->pData,"\t\t\t\t  Radius         : 6,051.8 km.\n");
    strcat(Earth->pData,"\t\t\t\t  Mass           : 4.867 x 10^24 kg.\n");
    strcat(Earth->pData,"\t\t\t\t  Gravity        : 8.87 m/s^2.\n");
    strcat(Earth->pData,"\t\t\t\t  Surface area   : 460.2 million km^2.\n");
    strcat(Earth->pData,"\t\t\t\t  Satellite      : The Moon.\n");
    strcat(Earth->pData,"\t\t\t\t  Distance from the sun : 108.2 million km.\n");


    //Mars Info
    strcpy(Mars->pName,"Mars");
    strcpy(Mars->pInfo,"\t\t\t\t  Planet Name : Mars\n\n");
    strcat(Mars->pInfo,"\t\t\t\t  Mars is the fourth planet and the furthest terrestrial\n");
    strcat(Mars->pInfo,"\t\t\t\t  planet from the Sun. The reddish color of its surface is\n");
    strcat(Mars->pInfo,"\t\t\t\t  due to finely grained iron (III) oxide dust in the soil,\n");
    strcat(Mars->pInfo,"\t\t\t\t  giving it the nickname \"the Red Planet\". Mars's radius is\n");
    strcat(Mars->pInfo,"\t\t\t\t  second-smallest among the planets in the Solar System, at 3,389.5 km.\n");


    strcpy(Mars->pData,"\t\t\t\t  Orbital period : 687 days.\n");
    strcat(Mars->pData,"\t\t\t\t  Length of day  : 1d 0h 37m.\n");
    strcat(Mars->pData,"\t\t\t\t  Radius         : 3,389.5 km.\n");
    strcat(Mars->pData,"\t\t\t\t  Mass           : 6.39 × 10^23 kg.\n");
    strcat(Mars->pData,"\t\t\t\t  Gravity        : 3.71 m/s^2.\n");
    strcat(Mars->pData,"\t\t\t\t  Surface area   : 144.4 million km^2.\n");
    strcat(Mars->pData,"\t\t\t\t  Satellite      : Phobos, Deimos.\n");
    strcat(Mars->pData,"\t\t\t\t  Distance from the sun : 227.9 million km.\n");


    // Jupiter info
    strcpy(Jupiter->pName,"Jupiter");
    strcpy(Jupiter->pInfo,"\t\t\t\t  Planet Name : Jupiter\n\n");
    strcat(Jupiter->pInfo,"\t\t\t\t  Mars is the fourth planet and the furthest terrestrial\n");
    strcat(Jupiter->pInfo,"\t\t\t\t  planet from the Sun. The reddish color of its surface is\n");
    strcat(Jupiter->pInfo,"\t\t\t\t  due to finely grained iron (III) oxide dust in the soil,\n");
    strcat(Jupiter->pInfo,"\t\t\t\t  giving it the nickname \"the Red Planet\". Mars's radius is\n");
    strcat(Jupiter->pInfo,"\t\t\t\t  second-smallest among the planets in the Solar System, at 3,389.5 km.\n");


    strcpy(Jupiter->pData,"\t\t\t\t  Orbital period : 11.86 Earth years.\n");
    strcat(Jupiter->pData,"\t\t\t\t  Length of day  : 0d 9h 56m.\n");
    strcat(Jupiter->pData,"\t\t\t\t  Radius         : 69,911 km.\n");
    strcat(Jupiter->pData,"\t\t\t\t  Mass           : 1.898 x 10^27 kg.\n");
    strcat(Jupiter->pData,"\t\t\t\t  Gravity        : 24.79 m/s^2.\n");
    strcat(Jupiter->pData,"\t\t\t\t  Surface area   : 61.42 billion km^2.\n");
    strcat(Jupiter->pData,"\t\t\t\t  Satellite      : Europa, Io, Ganymede, Callisto, Amalthea, Jupiter LXI, and MORE.\n");
    strcat(Jupiter->pData,"\t\t\t\t  Distance from the sun : 778.5 million km.\n");

    //Saturn info
    strcpy(Saturn->pName,"Saturn");
    strcpy(Saturn->pInfo,"\t\t\t\t  Planet Name : Satrun\n\n");
    strcat(Saturn->pInfo,"\t\t\t\t  Saturn is the sixth planet from the Sun and the second-largest\n");
    strcat(Saturn->pInfo,"\t\t\t\t  in the Solar System, after Jupiter. It is a gas giant with an \n");
    strcat(Saturn->pInfo,"\t\t\t\t  average radius of about nine-and-a-half times that of Earth. It\n");
    strcat(Saturn->pInfo,"\t\t\t\t  has only one-eighth the average density of Earth but is over 95\n");
    strcat(Saturn->pInfo,"\t\t\t\t  times more massive.\n");


    strcpy(Saturn->pData,"\t\t\t\t  Orbital period : 29.4 Earth years.\n");
    strcat(Saturn->pData,"\t\t\t\t  Length of day  : 0d 10h 34m.\n");
    strcat(Saturn->pData,"\t\t\t\t  Radius         : 58,232 km.\n");
    strcat(Saturn->pData,"\t\t\t\t  Mass           : 5.683 x 10^26 kg.\n");
    strcat(Saturn->pData,"\t\t\t\t  Gravity        : 10.44 m/s^2.\n");
    strcat(Saturn->pData,"\t\t\t\t  Surface area   : As a gas giant, Saturn doesn't have a true surface.\n");
    strcat(Saturn->pData,"\t\t\t\t  Satellite      : Titan, Enceladus, Mimas, Dione, Iapetus, Tethys, Hyperion, and MORE.\n");
    strcat(Saturn->pData,"\t\t\t\t  Distance from the sun : 1.4578 billion km\n");


    //Uranus info
    strcpy(Uranus->pName,"Uranus");
    strcpy(Uranus->pInfo,"\t\t\t\t  Planet Name : Uranus\n\n");
    strcat(Uranus->pInfo,"\t\t\t\t  Uranus is the seventh planet from the Sun and is a gaseous\n");
    strcat(Uranus->pInfo,"\t\t\t\t  cyan ice giant. Most of the planet is made of water, ammonia,\n");
    strcat(Uranus->pInfo,"\t\t\t\t  and methane in a supercritical phase of matter, which in astronomy\n");
    strcat(Uranus->pInfo,"\t\t\t\t  is called 'ice' or volatile.\n");


    strcpy(Uranus->pData,"\t\t\t\t  Orbital period : 84 Earth years.\n");
    strcat(Uranus->pData,"\t\t\t\t  Length of day  : 0d 17h 14m.\n");
    strcat(Uranus->pData,"\t\t\t\t  Radius         : 25,362 km.\n");
    strcat(Uranus->pData,"\t\t\t\t  Mass           : 8.681 x 10^25 kg.\n");
    strcat(Uranus->pData,"\t\t\t\t  Gravity        : 8.87 m/s^2.\n");
    strcat(Uranus->pData,"\t\t\t\t  Surface area   : As an ice giant, Uranus doesn't have a true surface.\n");
    strcat(Uranus->pData,"\t\t\t\t  Satellite      : Titania, Oberon, Cupid, Cressida, Miranda, Umbriel, and Ariel.\n");
    strcat(Uranus->pData,"\t\t\t\t  Distance from the sun : 2.871 billion km.\n");

    //Neptune info
    strcpy(Neptune->pName,"Neptune");
    strcpy(Neptune->pInfo,"\t\t\t\t  Planet Name : Neptune\n\n");
    strcat(Neptune->pInfo,"\t\t\t\t  Neptune is the eighth planet from the Sun and the\n");
    strcat(Neptune->pInfo,"\t\t\t\t  farthest IAU-recognized planet in the Solar System.\n");
    strcat(Neptune->pInfo,"\t\t\t\t  It is the fourth-largest planet in the Solar System by\n");
    strcat(Neptune->pInfo,"\t\t\t\t  diameter, the third-most-massive planet, and the\n");
    strcat(Neptune->pInfo,"\t\t\t\t  densest giant planet. It is 17 times the mass of Earth,\n");
    strcat(Neptune->pInfo,"\t\t\t\t  and slightly more massive than its near-twin Uranus.\n");


    strcpy(Neptune->pData,"\t\t\t\t  Orbital period : 164.79 Earth years.\n");
    strcat(Neptune->pData,"\t\t\t\t  Length of day  : 0d 16h 6m.\n");
    strcat(Neptune->pData,"\t\t\t\t  Radius         : 24,622 km.\n");
    strcat(Neptune->pData,"\t\t\t\t  Mass           : 1.024 x 10^26 kg.\n");
    strcat(Neptune->pData,"\t\t\t\t  Gravity        : 11.15 m/s^2.\n");
    strcat(Neptune->pData,"\t\t\t\t  Surface area   : 7.618 billion km^2.\n");
    strcat(Neptune->pData,"\t\t\t\t  Satellite      : Triton, Thalassa, Hippocamp, Nereid, Galatea, Despina, MORE.\n");
    strcat(Neptune->pData,"\t\t\t\t  Distance from the sun : 4.495 billion km.\n");


    Mercury->next = Venus;
    Venus->next = Earth;
    Earth->next = Mars;
    Mars->next = Jupiter;
    Jupiter->next = Saturn;
    Saturn->next = Uranus;
    Uranus->next = Neptune;
    Neptune->next = NULL;

}


//Function for All planet > Info_of_planet()


void get_any_planet(int n)
{
    getchar();
    Planet * temp = Mercury;
    for(int i = 1; i < n; i++)
    {
        temp = temp->next;
    }
    system("cls");
    Design();
    printf("%s \n\n%s\n",temp->pInfo,temp->pData);
    char op;
    printf("\t\t\t\t  >> Press '0' to return back : ");
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }
}

void outer_planet()
{


    neb nebulaInfo[5];
    gal galaxyInfo[5];
    int op;

    //Nebula info

    strcpy(nebulaInfo[0].name, "Carina Nebula");
    strcpy(nebulaInfo[0].description,"The Carina Nebula is a planetary nebula\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  located in the constellation Lyra. The Carina\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  Nebula [7] or Eta Carinae Nebula [8]\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  \(catalogued as NGC 3372; also known as the \n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  Great Carina Nebula [9]) is a large, complex\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  area of bright and dark nebulosity in the\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  constellation The nebula has within its boundaries\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  the large Carina OB1 association and several\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  related open clusters, including numerous O-type\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  stars and several Wolf-Rayet stars. Carina OB1\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  encompasses the star clusters Trumpler 14 and\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  Trumpler 16.Trumpler 14 is one of the youngest known \n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  star clusters, at half a million years old.  \n\n\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  Trumpler 16 is the home of WR 25, currently the most\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  luminous star known in our Milky Way galaxy\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  [citation needed], together with the less\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  luminous but more massive and famous Eta\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  Carinae star system and the O2 supergiant HD\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  93129A. Trumpler 15, Collinder 228, Collinder \n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  232, NGC 3324, and NGC 3293 are also considered\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  members of the association. NGC 3293 is the\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  oldest and furthest from Trumpler 14, indicating\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  sequential and ongoing star formation. The nebula\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  is one of the largest diffuse nebulae in our\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  skies. Although it is four times as large as and\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  even brighter than the famous Orion Nebula, the\n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  Carina Nebula is much less well known due to \n");
    strcat(nebulaInfo[0].description,"\t\t\t\t  its location in the southern sky.\n");


    strcpy(nebulaInfo[1].name, "Butterfly Nebula");
    strcpy(nebulaInfo[1].description, "The Butterfly Nebula is a bipolar planetary\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  nebula in the constellation Scorpius. NGC\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  6302 (also known as the Bug Nebula, Butterfly\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  Nebula, or Caldwell 69) is a bipolar planetary\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  nebula in the constellation Scorpius. The\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  structure of the nebula is among the most\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  complex ever observed in planetary nebulae.\n\n\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  The spectrum of NGC 6302 shows that its\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  central star is one of the hottest stars known, \n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  with a surface temperature in excess of \n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  250,000 degrees Celsius, implying that the star \n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  from which it formed must have been very\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  large. The central star, a white dwarf, was \n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  identified in 2009 using the upgraded Wide\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  Field Camera 3 on board the Hubble Space \n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  Telescope. [7] The star has a current mass of\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  around 0.64 solar masses. It is surrounded by\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  a dense equatorial disc composed of gas and\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  dust. This dense disc is postulated to have\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  caused the star's outflows to form a bipolar \n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  structure [8], similar to an hourglass. This\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  bipolar structure shows features such as\n");
    strcat(nebulaInfo[1].description,"\t\t\t\t  ionization walls, knots, and sharp eknots to the lobes.\n");



    strcpy(nebulaInfo[2].name, "Horsehead Nebula");
    strcpy(nebulaInfo[2].description, "The Horsehead Nebula is a fictional nebula for\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  this example.  The Horsehead Nebula (also\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  known as Barnard 33) is a small, dark nebula\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  in the constellation Orion.  [2] The nebula is\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  located just to the south of Alnitak, the\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  easternmost star of Orion's Belt, and is part of \n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  the much larger Orion molecular cloud complex.\n\n\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  It appears within the southern region\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  of the dense dust cloud known as Lynds 1630,\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  along the edge of the much larger, active\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  star-forming H II region called IC 434.  [3] The\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  Horsehead Nebula is approximately 422 \n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  parsecs, or 1,375 light-years, from Earth.\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  [1][3] It is one of the most identifiable nebulae\n");
    strcat(nebulaInfo[2].description,"\t\t\t\t  because of its resemblance to a horse's head.\n");


    strcpy(nebulaInfo[3].name, "Ring Nebula");
    strcpy(nebulaInfo[3].description, "The Ring Nebula (also catalogued as Messier\n");
    strcat(nebulaInfo[3].description,"\t\t\t\t  57, M57, and NGC 6720) is a planetary nebula\n");
    strcat(nebulaInfo[3].description,"\t\t\t\t  in the northern constellation of Lyra. [4][C]\n");
    strcat(nebulaInfo[3].description,"\t\t\t\t  Such a nebula is formed when a star, during \n");
    strcat(nebulaInfo[3].description,"\t\t\t\t  the last stages of its evolution before\n");
    strcat(nebulaInfo[3].description,"\t\t\t\t  becoming a white dwarf, expels a vast, \n");
    strcat(nebulaInfo[3].description,"\t\t\t\t  luminous envelope of ionized gas into the \n");
    strcat(nebulaInfo[3].description,"\t\t\t\t  surrounding interstellar space.\n");


    strcpy(nebulaInfo[4].name, "SN 1572(Tycho's Supernova) Nebula");
    strcpy(nebulaInfo[4].description, "SN 1572 (Tycho's Supernova, Tycho's Nova),or B \n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  Cassiopeiae (B Cas), was a supernova of Type Ia \n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  in the constellation Cassiopeia, one of eight \n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  supernovae visible to the naked eye in\n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  historical records. It appeared in early\n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  November 1572 and was independently\n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  discovered by many individuals. Its supernova\n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  remnant has been observed optically but was\n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  first detected at radio wavelengths; it is often\n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  known as 3C 10, a radio-source designation,\n");
    strcat(nebulaInfo[4].description,"\t\t\t\t  although increasingly as Tycho's supernova remnant.\n");


    //Galaxy info

    strcpy(galaxyInfo[0].name,"Milky Way Galaxy");
    strcpy(galaxyInfo[0].description,"The Milky Way [c] is the galaxy that includes \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  the Solar System, with the name describing \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  the galaxy's appearance from Earth: a hazy \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  band of light seen in the night sky formed \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  from stars that cannot be individually \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  distinguished by the naked eye. The term\n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  Milky Way is a translation of the Latin via\n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  lactea, from the Greek γαλαξίας κύκλος \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  (galaxías kýklos), meaning milky circle. From \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  Earth, the Milky Way appears as a band \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  because its disk-shaped structure is viewed \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  from within. Galileo Galilei first resolved the\n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  band of light into individual stars with his\n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  telescope in 1610. Until the early 1920s, most \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  astronomers thought that the Milky Way \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  contained all the stars in the universe.  [28] \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  Following the 1920 Great Debate between the\n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  astronomers Harlow Shapley and Heber Doust \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  Curtis [29], observations by Edwin Hubble \n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  showed that the Milky Way is just one of many\n");
    strcat(galaxyInfo[0].description,"\t\t\t\t  galaxies.\n");



    strcpy(galaxyInfo[1].name,"Andromeda Galaxy");
    strcpy(galaxyInfo[1].description,"The Andromeda Galaxy is a barred spiral \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  galaxy and is the nearest major galaxy to the \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  Milky Way. It was originally named the \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  Andromeda Nebula and is cataloged as \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  Messier 31, M31, and NGC 224. Andromeda \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  has a diameter of about 46.56 kiloparsecs \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  (152,000 light-years) [8] and is approximately \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  765 kpc (2.5 million light-years) from Earth. \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  The galaxy's name stems from the area of \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  Earth's sky in which it appears, the \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  constellation of Andromeda, which itself is \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  named after the princess who was the wife of \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  Perseus in Greek mythology. The virial mass \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  of the Andromeda Galaxy is of the same order \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  of magnitude as that of the Milky Way, at 1 \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  trillion solar masses (2.0×1042 kilograms). The \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  mass of either galaxy is difficult to estimate \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  with any accuracy, but it was long thought that\n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  the Andromeda Galaxy was more massive \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  than the Milky Way by a margin of some 25% \n");
    strcat(galaxyInfo[1].description,"\t\t\t\t  to 50%.\n");


    strcpy(galaxyInfo[2].name,"Sombrero Galaxy");
    strcpy(galaxyInfo[2].description,"The Sombrero Galaxy (also known as Messier \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  Object 104, M104, or NGC 4594) is a peculiar \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  galaxy of unclear classification [5] in the \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  constellation borders of Virgo and Corvus, \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  being about 9.55 megaparsecs (31.1 million \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  light-years) [2] from the Milky Way galaxy. It is \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  a member of the Virgo II Groups, a series of \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  galaxies and galaxy clusters strung out from \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  the southern edge of the Virgo Supercluster.\n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  It has an isophotal diameter of \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  approximately 29.09 to 32.32 kiloparsecs \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  (94,900 to 105,000 light-years) [1], making it \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  slightly bigger in size than the Milky Way. It \n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  has a bright nucleus, an unusually large\n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  central bulge, and a prominent dust lane in its\n");
    strcat(galaxyInfo[2].description,"\t\t\t\t  outer disk, which is viewed almost edge-on.\n");



    strcpy(galaxyInfo[3].name,"Triangulum Galaxy");

    strcpy(galaxyInfo[3].description,"The Triangulum Galaxy is a spiral galaxy 2.73\n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  million light-years (ly) from Earth in the\n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  constellation Triangulum. It is catalogued as \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  Messier 33 or NGC (New General Catalogue) \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  598. With a D25 isophotal diameter of 18.74 \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  kiloparsecs (61,100 light-years), the \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  Triangulum Galaxy is the third-largest member \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  of the Local Group of galaxies, behind the\n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  Andromeda Galaxy and the Milky Way. The\n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  galaxy is the smallest spiral galaxy in the \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  Local Group (although the smaller Large and \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  Small Magellanic Clouds may have been \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  spirals before their encounters with the Milky \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  Way) and is believed to be a satellite of the \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  Andromeda Galaxy or on its rebound into the \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  latter due to their interactions, velocities, and  \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  proximity to one another in the night sky. It \n");
    strcat(galaxyInfo[3].description,"\t\t\t\t  also has an H-II nucleus.\n");

    while (1)
    {
        system("cls");
        Design();
        printf("\t\t\t\t  1. Nebula\n");
        printf("\t\t\t\t  2. Black Hole\n");
        printf("\t\t\t\t  3. Galaxy\n\n");
        printf("\t\t\t\t  >> Enter your choice\n");
        printf("\t\t\t\t  >> Or Please press '0' to return back : ");

        scanf("%d", &op);

        if(op == 1)
        {
            // Submenu for Nebula
            system("cls");
            Design();
            int choice;
            printf("\t\t\t\t  1.Carina Nebula\n\n");
            printf("\t\t\t\t  2.Butterfly Nebula\n\n");
            printf("\t\t\t\t  3.Horsehead Nebula\n\n");
            printf("\t\t\t\t  4.Ring Nebula\n\n");
            printf("\t\t\t\t  5.SN 1572(Tycho's Supernova) Nebula\n\n");
            printf("\t\t\t\t  >> Enter your choice\n");
            printf("\t\t\t\t  >> Or Please press '0' to return back : ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                displayNebulaInfo(nebulaInfo[0]);
            }
            else if (choice == 2)
            {
                displayNebulaInfo(nebulaInfo[1]);
            }
            else if (choice == 3)
            {
                displayNebulaInfo(nebulaInfo[2]);
            }

            else if (choice == 4)
            {
                displayNebulaInfo(nebulaInfo[3]);
            }
            else if (choice == 5)
            {
                displayNebulaInfo(nebulaInfo[4]);
            }
            else if (choice == 0)
            {
                return;
            }

        }
        else if(op == 2)
        {
            system("cls");
            Design();

            char blackWhole[10000] = "\t\t\t\t  Black Hole : \n\n\t\t\t\t  A black hole is a region of spacetime where\n";
            strcat(blackWhole,"\t\t\t\t  gravity is so strong that nothing, including\n");
            strcat(blackWhole,"\t\t\t\t  light and other electromagnetic waves, has\n");
            strcat(blackWhole,"\t\t\t\t  enough energy to escape it.[2] The theory of\n");
            strcat(blackWhole,"\t\t\t\t  general relativity predicts that a sufficiently\n");
            strcat(blackWhole,"\t\t\t\t  compact mass can deform spacetime to form a\n");
            strcat(blackWhole,"\t\t\t\t  black hole.[3][4] The boundary of no escape\n");
            strcat(blackWhole,"\t\t\t\t  is called the event horizon. Although it has a\n");
            strcat(blackWhole,"\t\t\t\t  great effect on the fate and circumstances of\n");
            strcat(blackWhole,"\t\t\t\t  an object crossing it, it has no locally\n");
            strcat(blackWhole,"\t\t\t\t  detectable features according to general\n");
            strcat(blackWhole,"\t\t\t\t  relativity.[5] In many ways, a black hole acts\n");
            strcat(blackWhole,"\t\t\t\t  like an ideal black body, as it reflects no light.\n");
            strcat(blackWhole,"\t\t\t\t  [6][7] Moreover, quantum field theory in\n");
            strcat(blackWhole,"\t\t\t\t  curved spacetime predicts that event horizons\n");
            strcat(blackWhole,"\t\t\t\t  emit Hawking radiation with the same\n");
            strcat(blackWhole,"\t\t\t\t  spectrum as a black body of a temperature\n");
            strcat(blackWhole,"\t\t\t\t  inversely proportional to its mass. This\n");
            strcat(blackWhole,"\t\t\t\t  temperature is of the order of billionths of a\n");
            strcat(blackWhole,"\t\t\t\t  kelvin for stellar black holes, making it \n");
            strcat(blackWhole,"\t\t\t\t  essentially impossible to observe directly.\n\n\n");
            strcat(blackWhole,"\t\t\t\t  Objects whose gravitational fields are too\n");
            strcat(blackWhole,"\t\t\t\t  strong for light to escape were first \n");
            strcat(blackWhole,"\t\t\t\t  considered in the 18th century by John Michell\n");
            strcat(blackWhole,"\t\t\t\t  and Pierre-Simon Laplace.[8] In 1916, Karl\n");
            strcat(blackWhole,"\t\t\t\t  Schwarzschild found the first modern solution\n");
            strcat(blackWhole,"\t\t\t\t  of general relativity that would characterize a\n");
            strcat(blackWhole,"\t\t\t\t  black hole. David Finkelstein, in 1958, first\n");
            strcat(blackWhole,"\t\t\t\t  published the interpretation of the black hole\n");
            strcat(blackWhole,"\t\t\t\t  as a region of space from which nothing can\n");
            strcat(blackWhole,"\t\t\t\t  escape. Black holes were long considered a\n");
            strcat(blackWhole,"\t\t\t\t  mathematical curiosity; it was not until the\n");
            strcat(blackWhole,"\t\t\t\t  1960s that theoretical work showed they were\n");
            strcat(blackWhole,"\t\t\t\t  a generic prediction of general relativity. The\n");
            strcat(blackWhole,"\t\t\t\t  discovery of neutron stars by Jocelyn Bell\n");
            strcat(blackWhole,"\t\t\t\t  Burnell in 1967 sparked interest in\n");
            strcat(blackWhole,"\t\t\t\t  gravitationally collapsed compact objects as a\n");
            strcat(blackWhole,"\t\t\t\t  possible astrophysical reality. The first black\n");
            strcat(blackWhole,"\t\t\t\t  hole known was Cygnus X-1, identified by\n");
            strcat(blackWhole,"\t\t\t\t  several researchers independently in 1971.\n\n\n");
            strcat(blackWhole,"\t\t\t\t  Black holes of stellar mass form when\n");
            strcat(blackWhole,"\t\t\t\t  massive stars collapse at the end of their life\n");
            strcat(blackWhole,"\t\t\t\t  cycle. After a black hole has formed, it can\n");
            strcat(blackWhole,"\t\t\t\t  grow by absorbing mass from its surroundings.\n");
            strcat(blackWhole,"\t\t\t\t  Supermassive black holes of millions of solar\n");
            strcat(blackWhole,"\t\t\t\t  masses (M☉) may form by absorbing other\n");
            strcat(blackWhole,"\t\t\t\t  stars and merging with other black holes.\n");
            strcat(blackWhole,"\t\t\t\t  There is consensus that supermassive black\n");
            strcat(blackWhole,"\t\t\t\t  holes exist in the centers of most galaxies.\n");
            strcat(blackWhole,"\t\t\t\t  The presence of a black hole can be inferred\n");
            strcat(blackWhole,"\t\t\t\t  through its interaction with other matter and\n");
            strcat(blackWhole,"\t\t\t\t  with electromagnetic radiation such as visible\n");
            strcat(blackWhole,"\t\t\t\t  light. Any matter that falls onto a black hole\n");
            strcat(blackWhole,"\t\t\t\t  can form an external accretion disk heated by\n");
            strcat(blackWhole,"\t\t\t\t  friction, forming quasars, some of the\n");
            strcat(blackWhole,"\t\t\t\t  brightest objects in the universe. Stars\n");
            strcat(blackWhole,"\t\t\t\t  passing too close to a supermassive black\n");
            strcat(blackWhole,"\t\t\t\t  hole can be shredded into streamers that \n");
            strcat(blackWhole,"\t\t\t\t  shine very brightly before being swallowed.\n");
            strcat(blackWhole,"\t\t\t\t  Such observations can be used to exclude \n");
            strcat(blackWhole,"\t\t\t\t  possible alternatives, such as neutron stars. \n\n");


            printf("%s",blackWhole);
            printf("\t\t\t\t  Press any key to return back.....");
            getch();
        }

        else if(op == 3)
        {
            system("cls");
            Design();
            int choice;
            printf("\t\t\t\t  1.Milky Way Galaxy\n\n");
            printf("\t\t\t\t  2.Andromeda Galaxy\n\n");
            printf("\t\t\t\t  3.Sombrero Galaxy\n\n");
            printf("\t\t\t\t  4.Triangulum Galaxy\n\n");
            printf("\t\t\t\t  >> Enter your choice\n");
            printf("\t\t\t\t  >> Or Please press '0' to return back : ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                displayGalaxyInfo( galaxyInfo[0]);
            }
            else if (choice == 2)
            {
                displayGalaxyInfo(galaxyInfo[1]);
            }
            else if (choice == 3)
            {
                displayGalaxyInfo(galaxyInfo[2]);
            }

            else if (choice == 4)
            {
                displayGalaxyInfo(galaxyInfo[3]);
            }
            else if(choice == 0)
            {
                return;
            }
        }
        else if(op == 0)
        {
            return;
        }
    }


}


void solar_system()
{
    int choice;

    while (true)
    {
        system("cls");
        Design();

        printf("\t\t\t\t  1.Mercury.  \n\t\t\t\t  2.Venus.\n");
        printf("\t\t\t\t  3.Earth.\n");
        printf("\t\t\t\t  4.Mars.\n");
        printf("\t\t\t\t  5.Jupiter.\n");
        printf("\t\t\t\t  6.Saturn.\n");
        printf("\t\t\t\t  7.Uranus.\n");
        printf("\t\t\t\t  8.Neptune.\n\n");
        printf("\t\t\t\t  >> Enter your choice\n");
        printf("\t\t\t\t  >> Or Please press '0' to return back : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            get_any_planet(1);
            break;
        case 2:
            get_any_planet(2);
            break;
        case 3:
            get_any_planet(3);
            break;
        case 4:
            get_any_planet(4);
            break;
        case 5:
            get_any_planet(5);
            break;
        case 6:
            get_any_planet(6);
            break;
        case 7:
            get_any_planet(7);
            break;
        case 8:
            get_any_planet(8);
            break;
        default:
            return;
        }
    }
}

void phase()
{
    Info_of_planet();
    int op;
    while(true)
    {
        system("cls");
        Design();
        printf("\n");
        printf("\t\t\t\t  1.Explore Solar system.....\n");
        printf("\t\t\t\t  2.Explore  Outer planetary system.....\n");
        printf("\t\t\t\t  3.Telescope Researches & Missions.....\n\n");
        printf("\t\t\t\t     Enter your choice >> \n");
        printf("\t\t\t\t  >> Or press '0' to return Main menu : ");
        scanf("%d",&op);
        switch(op)
        {
        case 1 :
            solar_system();
            break;
        case 2 :
            outer_planet();
            break;
        case 3 :
            researchAndMission();
            break;
        default :
            return;
        }
    }
}



void ticketPrice()
{

    int o,q,r,s;
    char tranCode[15],email[50],myName[20];
    system("cls");
    Design();
    printf("You have 15 minutes for payment.Pay now to secure your booked seat otherwise your booked seat will be canceled.\n");
    printf("You can pay through online with Bkash,Nagad,Rocket.Or you can also pay through offline directory by our staff \n");

//ptintf("\n");
print6:

    printf("\n\t\t\t\t  1 : Online payment\n");
    printf("\n\t\t\t\t  2 : Offline Payment\n");
    printf("\n\t\t\t\t  Select your payment option : ");
    scanf("%d",&o);
    if(o==1)                                        //user selected online payment
    {
me:
        system("cls");
        Design();
        printf("\t\t\t\t  Press 1 : Bkash\n");
        printf("\t\t\t\t  Press 2 : Nagad\n\n");
        printf("\t\t\t\t  Choose a platform: ");

        scanf("%d",&q);                              //user selected payment medium
        if(q==1)
        {
            system("cls");
            Design();
            printf("\n\t\t\t\t  Your phone number : ");
            scanf("%d",&r);

            getchar();
            printf("\n\t\t\t\t  Your email address : ");

            scanf("%s",&email);

            getchar();
            printf("\n\t\t\t\t  Give Transaction Code : ");
            scanf("%s",tranCode);
            printf("\n");
            getchar();
            printf("\n\t\t\t\t  Your transaction code is valid.\n\t\t\t\tTicket will be sent to your email address as soon as possible.ThankYou!\n");
            system("pause");
//            customerMode();

        }
        else if(q==2)
        {
            system("cls");
            Design();
            printf("\n");
            printf("\t\t\t\t  Your phone number : ");
            scanf("%d",&r);
            getchar();

            printf("\n\t\t\t\t  Your email address : ");

            scanf("%s",&email);

            getchar();
            printf("\n\t\t\t\t  Give Transaction Code : ");
            scanf("%s",tranCode);
            getchar();
            printf("\n\t\t\t\t  Your transaction code is valid.\n\t\t\t\t  Ticket will be sent to your email address as soon as possible.ThankYou!\n\n");
            system("pause");
//            customerMode();

        }

        else
        {
            goto me;
        }
    }

    else if(o==2)
    {
        system("cls");
        Design();
        getchar();
        printf("\n\t\t\t\t  Enter Your Name : ");
        fgets(myName,20,stdin);

        printf("\n\t\t\t\t  Your Phone Number : ");
        scanf("%d",&s);

        printf("\n\t\t\t\t  Your email : ");
        scanf("%s",&email);

        printf("\n\t\t\t\t  ThankYou!You have booked your seat successfully.For any query contact 01981840999.\n\n\n");
        printf("\n");
        system("pause");
//        customerMode();
    }

    else
    {
        goto print6;
    }
}




void seatPlan()
{
    system("cls");
    Design();
    char seat[40][40];
    int sNum,ticq;
    int am,vv,cc=0;
nn:
    printf("\t\t\t\t  Please Select your Ticket Type : \n\n\n");

    printf("\t\t\t\t  1 ) Normal Ticket - 500 Taka\n\n");

    printf("\t\t\t\t  2 ) Premium Ticket - 600 Taka\n\n");

    printf("\t\t\t\t     Enter your choice >> \n");
    printf("\t\t\t\t  >> Or press '0' to return Main menu : ");


    scanf("%d",&am);
    if(am == 1 || am == 2)

    {

        printf("\n\t\t\t\t  Ticket Quatity : ");
        scanf("%d",&ticq);
        printf("\n");
        if(ticq>0 && ticq<=500)
        {
            printf("\n\t\t\t\t  Please Enter Seat Code(Example-A1 A2) : ");
            for(int i=0; i<ticq; i++)
            {

                scanf("%s",&seat[i]);

            }
            if(am==1)
            {

                am=500;
                vv=am*ticq;
            }

            else if(am==2)
            {

                am=600;
                vv=am*ticq;
            }
            else if(am>=3)
            {

                goto nn;

            }

        }
        printf("\n\n\t\t\t\t  Your booked seats : ");
        for(int i=0; i<ticq; i++)
        {
            printf("%s ",seat[i]);
        }
        printf("\n\n\t\t\t\t  Total Due : %d Taka\n",vv);
        system("pause");
        vv=0;
        am=0;
        ticketPrice();
    }
    else if(am == 0)
    {
        return;
    }

}
//start


void appRating()
{
    getchar();
    system("cls");
    printf("\t\t  *  .       .  *          .  *   .   .  .   * .  *   .   *  .   .  \n");
    printf("\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t        .     .  *    .     * .  *   .  *    .   *  .  *    .   *    \n");
    printf("\t\t* .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t   . *       .  *    .     .  *   .   .  .   * .  *   .   *  .   .  \n");

    printf("\n\n");
    printf("\t\t  .*    .     .  *    .     * .  *   .  *    .   *  .  *    .   .    \n");
    printf("\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t        .     .  *    .     * .  *   .  *    .    *  .   *  .  .  .\n");
    printf("\t\t   .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   *  \n");
    printf("\t\t*.      *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t     *       .  *          .  *   .   .  .   * .  *   .   *  .   *  \n");

    printf("\n\t\t\t\tYour portal to the universe awaits.\n");
    printf("\t\t\t\tExplore the cosmos and reach for the stars.\n\n");
    printf("\n\n\n\t\t\t\t  1. * * * * *\n");
    printf("\t\t\t\t  2. * * * *\n");
    printf("\t\t\t\t  3. * * *\n");
    printf("\t\t\t\t  4. * *\n");
    printf("\t\t\t\t  5. *\n");
    int rat;
    printf("\n\t\t\t\t Choice is yours : ");
    scanf("%d",&rat);
    if(rat == 1)
    {
        printf("\n\t\t\t\t Thank you for the 5-star rating! \n\t\t\t\t We're delighted to hear that you had an excellent experience with our service.\n");
    }
    else if(rat == 2)
    {
        printf("\n\t\t\t\t Thank you for your positive feedback. \n\t\t\t\t We're glad to hear you had a good experience!\n");
    }
    else if(rat == 3)
    {
        printf("\n\t\t\t\t Thank you for your feedback.\n\t\t\t\t  We appreciate your input.\n");
    }
    else if(rat == 4)
    {
        printf("\n\t\t\t\t Thank you for your feedback.\n\t\t\t\t  We're sorry to hear about your experience!!\n");
    }
    else if(rat == 5)
    {
        printf("\n\t\t\t\t Thank you for your feedback.\n\t\t\t\t  We're sorry to hear about your experience!!\n");
    }
    getchar();
    char op;

    printf("\n\n\t\t\t\t  >> Press '0' to return Main Menu : ");
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }
}

void aboutUs()
{
    getchar();
    system("cls");
    printf("\t\t\t  *  .       .  *          .  *   .   .  .   * .  *   .   *  .   .  \n");
    printf("\t\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t\t        .     .  *    .     * .  *   .  *    .   *  .  *    .   *    \n");
    printf("\t\t\t* .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t\t   . *       .  *    .     .  *   .   .  .   * .  *   .   *  .   .  \n");

    printf("\n\n");
    printf("\t\t\t  .*    .     .  *    .     * .  *   .  *    .   *  .  *    .   .    \n");
    printf("\t\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
    printf("\t\t\t        .     .  *    .     * .  *   .  *    .    *  .   *  .  .  .\n");
    printf("\t\t\t   .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   *  \n");
    printf("\t\t\t*.      *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
    printf("\t\t\t     *       .  *          .  *   .   .  .   * .  *   .   *  .   *  \n");

    printf("\n\t\t\t\tYour portal to the universe awaits.\n");
    printf("\t\t\t\tExplore the cosmos and reach for the stars.\n\n");
    printf("\n\n\t\t\t\t  >> Rifat Parvej Pranto\n");
    printf("\t\t\t\t  >> Sattik Siraj\n");
    printf("\t\t\t\t  >> Md Rageb Rownok \n");
    printf("\t\t\t\t  >> Tanvir Hasan \n");
    printf("\t\t\t\t  >> Tanvir Suny \n");
    printf("\t\t\t\t  >> Hridoy Hasan\n\n");
    char op;

    printf("\t\t\t\t  >> Press '0' to return Main Menu : ");
    scanf("%c",&op);
    if(op == '0')
    {
        return;
    }
    else
    {
        return;
    }

}

void registerUser()
{
    UserReg Reg;
    system("cls");
    Design();
    printf("\t\t\t\t  Enter your first name   : ");
    scanf("%s", Reg.Fname);
    fflush(stdin);
    printf("\t\t\t\t  Enter your last name    : ");
    scanf("%s", Reg.Lname);
    fflush(stdin);
    printf("\t\t\t\t  Enter your email address: ");
    scanf("%s", Reg.Email);
    fflush(stdin);

    printf("\n\t\t\t\t  Thank you.\n\t\t\t\t  Now please choose a username and password as credentials for system login.\n");
    printf("\t\t\t\t  Ensure the username is not more than 30 characters long.\n\n");
    printf("\t\t\t\t  Enter username : ");
    scanf("%s", Reg.username);
    fflush(stdin);
    printf("\n\t\t\t\t  Ensure your password is at least 8 characters long and contains:\n");
    printf("\t\t\t\t  lowercase, uppercase, numerical, and special character values.\n\n");
    printf("\t\t\t\t  Enter password : ");
    scanf("%s", Reg.password);
    fflush(stdin);

    FILE *file = fopen("users.txt", "ab");

    if (file == NULL)
    {
        printf("\t\t\t\t  Error opening the file.\n");
        return;
    }

    fwrite(&Reg,sizeof(Reg),1,file);
    fflush(stdin);
    fclose(file);

    printf("\n\t\t\t\t  Registration successful!\n");
    int choice;
    printf("\t\t\t\t  Wanna Login? (Y/N): ");
    scanf("%c", &choice);
    if (choice == 'Y' || choice == 'y')
    {
        loginUser();
    }
    else if (choice == 'N' || choice == 'n')
    {
        return;
    }
}


void loginUser()
{
    login log;
    UserReg Reg;
    system("cls");
    Design();
    printf("\t\t\t\t  Enter username: ");
    scanf("%s", log.userName);
    printf("\t\t\t\t  Enter password: ");
    scanf("%s", log.password);

    FILE *file = fopen("users.txt", "rb");

    if (file == NULL)
    {
        printf("\t\t\t\t  Error opening the file.\n");
        return;
    }

    bool found = false;

    while (fread(&Reg, sizeof(UserReg), 1, file))
    {
        if (strcmp(log.userName, Reg.username) == 0)
        {
            found = true;
            if (strcmp(log.password, Reg.password) == 0)
            {
                phase();
                fclose(file);
                return;
            }
            else
            {
                system("cls");
                printf("\t\t\t\t  Wrong password!\n");
                printf("\t\t\t\t  Try again. (Y/N) : ");
                char choice;
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y')
                {
                    fclose(file);
                    loginUser();
                    return;
                }
                else if (choice == 'N' || choice == 'n')
                {
                    fclose(file);
                    return;
                }
            }
        }
    }

    fclose(file);

    if (found == false)
    {
        system("cls");
        printf("\t\t\t\t  Invalid Username!\n");
        printf("\t\t\t\t  Try again. (Y/N) : ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            loginUser();
        }
        else if (choice == 'N' || choice == 'n')
        {
            return;
        }
    }
}



int main()
{

    int choice;

    while (true)
    {
go :
        system("cls");
        printf("\n");
        printf("\n");
        printf("\t\t\t\t\t  Welcome to Orion Space Rumbler!\n\n");


        printf("\t\t\t  *  .       .  *          .  *   .   .  .   * .  *   .   *  .   .  \n");
        printf("\t\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
        printf("\t\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
        printf("\t\t\t        .     .  *    .     * .  *   .  *    .   *  .  *    .   *    \n");
        printf("\t\t\t* .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
        printf("\t\t\t        *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
        printf("\t\t\t   . *       .  *    .     .  *   .   .  .   * .  *   .   *  .   .  \n");

        printf("\n\n");
        printf("\t\t\t  .*    .     .  *    .     * .  *   .  *    .   *  .  *    .   .    \n");
        printf("\t\t\t  .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   .  \n");
        printf("\t\t\t        .     .  *    .     * .  *   .  *    .    *  .   *  .  .  .\n");
        printf("\t\t\t   .  *    .  *   .  *   .   *  .   * .   .    *   .    *    .  *   *  \n");
        printf("\t\t\t*.      *  .      *   .  *     .     .  *   .  *   .  *   .   .  .  \n");
        printf("\t\t\t     *       .  *          .  *   .   .  .   * .  *   .   *  .   *  \n");

        printf("\n\t\t\t\tYour portal to the universe awaits.\n");
        printf("\t\t\t\tExplore the cosmos and reach for the stars.\n\n");


        printf("\t\t\t\t  1.Signup.  \n\t\t\t\t  2.Login.\n");
        printf("\t\t\t\t  3.Book tickets for space show.\n\n\n");
        printf("\t\t  4.Rate out app.");
        printf("\t\t\t\t\t  5.About us.\n\n");
        printf("\t\t\t\t  6.Exit.\n\n");
        printf("\t\t\t\t  >> Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerUser();
            break;
        case 2:
            loginUser();
            break;
        case 3:
            seatPlan();
            break;
        case 4:
            appRating();
            break;
        case 5:
            aboutUs();
            break;
        case 6:
            exit(0);
        default:
            goto go;
        }
    }

    return 0;
}


