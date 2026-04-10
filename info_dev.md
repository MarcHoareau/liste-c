# Introduction 
Due a une fuite importante de memoire apres utilisation de ***liste-c.h***, je me dois de la reimplementer.  
[Lien github](https://github.com/MarcHoareau/liste-c) 

# La directive ***#pragma once***

Dans les langages de programmation C et C++, #pragma once est une directive de préprocesseur non standard mais largement prise en charge, conçue pour que le fichier source actuel ne soit inclus qu'une seule fois dans une seule compilation[1]. Ainsi, #pragma once a le même objectif que les include guards, mais avec plusieurs avantages, notamment : moins de code, évitement des conflits de noms et parfois une amélioration de la vitesse de compilation[2]. D'autre part, #pragma once n'est pas nécessairement disponible dans tous les compilateurs et son implémentation est délicate et peut ne pas toujours être fiable.