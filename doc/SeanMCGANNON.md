

Arduino project:

Terrarduino

Mon équipe de travail est composé de moi-même (MCGANNON Sean), VAUJANY Alexandre et TOGNAN Antonin.



Entry 20/12/17: 

Dans cette première séance, après avoir créer notre trinôme, nous nous sommes mis d'accord de faire un projet en rapport avec les animaux et la vie en général : le Terranium autonome.

Grâce à ce projet, nous spéculons que nous apprendrons énormement de choses sur les animaux cibles de nos recherches, le travail d'équipe et autonome, entre-autres.

Nous avons donc commencer à chercher ce que nous aurons besoin afin d'amener a bien notre projet. C'est-à-dire, le matériel que nous pourrions avoir besoin, une base de donnée à créer avec toutes les caractéristiques des reptiles les plus achetés et "hébergés" dans les terranium. Ses informations seront capitales afin de leur recréer un milieu de vie optimal.



Entry 12/01/18:

Voici une première lister qui va évolué tout au long des projets:
- Capteur de température/humidité (ok);
- Plaques de pexiglasse (parois);
- Ampoule U.V;
- Plaque chauffante;
- Minuteur arduino;
- Peltier + radiateur (condensation); ok pelletier
- Servo-moteur;
- Trappe;
- Reservoir d'eau;
- Laser/récepteur;
- Proximity sensor;

Nous aurons besoin de faire un page web afin de contrôler le terrarium à distance. Si le projet avance comme il faut, nous pensons de créer une application.

J'ai aussi commencer à chercher les codes uties a faire marcher les composants que nous avons pu avoir, tel que le capteur de température et d'humidité et le laser + recepteur. Probleme avec le capteur de température. J'obtiens des résultats aberrant comme 691°C de température.

Le peltier va servir au refroidissment du milieu quand cela sera nécessaire. Regarder la méthode de branchement to do!



Entry 19/01/18:

Les code et les branchements pour la trappe (laser-recepteur + servomoteur), le capteur temperature-humidity ont été resolu et corrigé.
Nous avons des petits problèmes pour ajouter les librairies.



Entry 23/01/18:

research done for the cooling system
peltier + radiateur + ventilo maybe



Entry 04/03/18:

Apres un mois à être coince sur le même programme, qui est celui permettant de rentrer les differentes caraftéristiques du réptile dans l'arduino afin de régler le milieu du terrarium (temperature, humidit, nourriture etc...) pour la bonne espece choisie, j'ai reussi a faire fonctionner le programme selon les donnees que rentrent l'utilisateur. 
Il y a un probleme : serial.read ne prend qu'un seul caractere à la fois étant problematique pour rentrer le poid et l'age si ces derniers étant superieurs a 9.
Le programme peut aussi diminuer l'humidite du milieu (en theorie grace au peltier). Je n'ai pas les reste du materiel me permettant controler la temperature (l'augmenter en utilisant la plaque chauffante ou l'ampoule ou la diminuer juste en eteignant ces derniers ou en aerant grâce a un ventilateur => pas encore décider sur cet aspect), le cycle lumineux (les bandes de led ne sont pas encore prete), la nourriture (il nous manque la trappe), l'eau (pas de pompe ou de reservoire) et enfin il me manque pour le moment le brumisateur permettant d'augmenter l'humidite du milieu.

A faire: 
- la distribution de la nourriture selon l'espece, le genre, le poids et son age;
- decouvrir le probleme avec le peltier: lorsqu'il est branché au vdd et la masse directement, on remarque une grande difference de temperature entre les 2 surfaces du peltier nous indiquant que ce dernier fonctionne. Mais lorsque je le branche sur une entree, qui se met sur la masse lorsque l'humidite depasse un certain nombre, le peltier n'a pas l'air de fonctionner (h > nbre en question). WHYYYY???

And finally since my last serious entry : la boite prototype fait en plexiglass a ete creer.
Donc voila ce qu'il nous manque: plaque chauffante, trappe, reservoir d'eau, brumisateur et pompe.
