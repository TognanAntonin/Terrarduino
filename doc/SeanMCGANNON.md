

Arduino project:

Terrarduino

Mon équipe de travail est composé de moi-même (MCGANNON Sean), VAUJANY Alexandre et TOGNAN Antonin.

> Entry 20/12/17: 

Dans cette première séance, après avoir créer notre trinôme, nous nous sommes mis d'accord de faire un projet en rapport avec les animaux et la vie en général : le Terranium autonome.

Grâce à ce projet, nous spéculons que nous apprendrons énormement de choses sur les animaux cibles de nos recherches, le travail d'équipe et autonome, entre-autres.

Nous avons donc commencer à chercher ce que nous aurons besoin afin d'amener a bien notre projet. C'est-à-dire, le matériel que nous pourrions avoir besoin, une base de donnée à créer avec toutes les caractéristiques des reptiles les plus achetés et "hébergés" dans les terranium. Ses informations seront capitales afin de leur recréer un milieu de vie optimal.

> Entry 12/01/18:

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

> Entry 19/01/18:

Les code et les branchements pour la trappe (laser-recepteur + servomoteur), le capteur temperature-humidity ont été resolu et corrigé.
Nous avons des petits problèmes pour ajouter les librairies.

> Entry 23/01/18:

research done for the cooling system
peltier + radiateur + ventilo maybe

> Entry 04/03/18:

Apres un mois à être coince sur le même programme, qui est celui permettant de rentrer les differentes caraftéristiques du réptile dans l'arduino afin de régler le milieu du terrarium (temperature, humidit, nourriture etc...) pour la bonne espece choisie, j'ai reussi a faire fonctionner le programme selon les donnees que rentrent l'utilisateur. 
Il y a un probleme : serial.read ne prend qu'un seul caractere à la fois étant problematique pour rentrer le poid et l'age si ces derniers étant superieurs a 9.
Le programme peut aussi diminuer l'humidite du milieu (en theorie grace au peltier). Je n'ai pas les reste du materiel me permettant controler la temperature (l'augmenter en utilisant la plaque chauffante ou l'ampoule ou la diminuer juste en eteignant ces derniers ou en aerant grâce a un ventilateur => pas encore décider sur cet aspect), le cycle lumineux (les bandes de led ne sont pas encore prete), la nourriture (il nous manque la trappe), l'eau (pas de pompe ou de reservoire) et enfin il me manque pour le moment le brumisateur permettant d'augmenter l'humidite du milieu.

A faire: 
- la distribution de la nourriture selon l'espece, le genre, le poids et son age;
- decouvrir le probleme avec le peltier: lorsqu'il est branché au vdd et la masse directement, on remarque une grande difference de temperature entre les 2 surfaces du peltier nous indiquant que ce dernier fonctionne. Mais lorsque je le branche sur une entree, qui se met sur la masse lorsque l'humidite depasse un certain nombre, le peltier n'a pas l'air de fonctionner (h > nbre en question). WHYYYY???

And finally since my last serious entry : la boite prototype fait en plexiglass a ete creer.
Donc voila ce qu'il nous manque: plaque chauffante, trappe, reservoir d'eau, brumisateur et pompe.

> Entry 06/03/18

J'ai ajouté au programe permettant de regler notre futur terrarduino, de quoi nourrir et gerer la temperature. Mais pas pu les tester a cause de l'absence du materiel besoin. Implements aux bases de données des informations reliees a l'alimentation de nos futurs locataires.

IDEA to discuss with the others: un systeme mecanique simpliste permettant aux utilisateurs de regler la taille du terrarium permettant de l'adapter selon les caracteristiques du reptile.
https://www.youtube.com/watch?v=FJHpl_x9Z8o => raw idea

> Entry 04/04/18

Nous avons à présent pratiquement tout le materiel besoin pour le projet. Le probleme mtn est de gerer les composants branchés sur le 12V grace aux relais. 

> Entry 02/05/18

Creation d'un compte Things Network: Id: Terrarduino Passwd: Terrarduino Email: seanachiketas@gmail.com

> Entry 20/05/18

Progression dans le code final!! Chaque composant électronique a son code, tout marche il nous manque encore le programme du module RTC.

> Entry 18-25 /05/18

Le terrarium est enfin monté avec le servomoteur, le radiateur, plaque chauffante implémentés; la boite a grillon a été adapté selon nos désirs. Terrarium et boite à grillon connecté. 

> Entry 30-31/05/18

Montage de tous les circuits électroniques sur le terrarium et la boite a grillon. Finition du code.
Nous avons passé la nuit à subir les petites anomalies dont souvent les sources des ces anomalies étaient "aléatoires".
Mais à présent tout marche sur un point de vue électronque. Probleme rencontre afin gerer le terrarduino a partir de notre telephone. A notre stade, nous pouvons uniquement recevoir les informations sur notre tell envoyé par le UCA board (grâce aux efforts persistentes de M. Tognan).
