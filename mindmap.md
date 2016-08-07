<!-- [metadata]>
+++
title = "MindMap des vulnérabilités"
author = "Hackademics Forum"
keywords = ["vulnerabilité, vecteur, attaque, sécurité, informatique, information, technologie, piratage, analyse, projet, mindmap, schéma, carte heuristique, hackademics, forum"]
+++
<![end-metadata] -->

<!--
Afin de garantir une pleine compatibilité avec l'ensemble des systèmes d'exploitation, veuillez conserver un encodage UTF-8 sans marque d'ordre des octets (BOM), utiliser une séquence de quatres espaces pour la tabulation et conserver une séquence CRLF (\r\n) pour le marquage de fin de ligne.
-->

# MindMap des vulnérabilités

## Web

### Injection

Les ___injections___ sont généralement issues d'un manque d'efficacité dans le contrôle de données traitées par un service. Un attaquant peut exploiter ce type de vulnérabilité afin de compromettre l'intégrité des données traitées, extraire des données et/ou exécuter du code arbitraire.

#### Operating system (OS)

L'injection au niveau du système d'exploitation permet l'exécution à distance de commandes systèmes, généralement par l'intermédiaire d'une interface de programmation _(Application programming interface, API)_.

##### ShellShock

###### Contexte

Permet l'injection de commandes arbitraires dans le Bourne Shell (Bash) en utilisant un&nbsp;:

  - Un échappement dans l'entête HTTP &laquo;&nbsp;*User-Agent*&nbsp;&raquo; lors de l'utilisation d'une interface CGI _(Common gateway interface)_&nbsp;;
  - Lorem _ipsum_ __dolor__ ___sit___ amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua&nbsp;;
  - Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.

__Plus d'informations&nbsp;:__ [CVE-2014-6271][1], [CVE-2014-7169][2], [CVE-2014-7186][3], [CVE-2014-7187][4]

###### Contres-mesures / contres-exploitations

  - Mise à jour de Bash en version 4.3&nbsp;;
  - [Configuration de Fail2Ban][5] pour détécter une tentative d'attaque.

#### Structured Query Language (SQL)

#### Lightweight Directory Access Protocol (LDAP)

### Cross-Site Scripting (XSS)

### Cross-Site Request Forgery (CSRF)

## Physiques

### Side-channel

#### Cold boot

#### Timing

#### Electromagnetic

##### TEMPEST

#### Power-monitoring

### Dumpster diving

### Lock picking

### Code universel des produits (UPC) et code-barres

#### European Article Numbering (EAN)

#### QR-Code

### Sans fil

#### Communication en champ proche (NFC)

##### Radio-identification (RFID)

#### Wi-Fi

##### Wired Equivalent Privacy (WEP)

##### Wi-Fi Protected Setup (WPS)

##### Wi-Fi Protected Access (WPA)

#### ZigBee

#### Bluetooth

#### Architecture de téléphonie mobile

##### SS7

#### Lock picking

## Applicatives

### Buffer overflow

#### Stack overflow

#### Heap overflow

  [1]: https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-6271 "CVE-2014-6271"
  [2]: https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-7169 "CVE-2014-7169"
  [3]: https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-7186 "CVE-2014-7186"
  [4]: https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2014-7187 "CVE-2014-7187"
  [5]: https://samhobbs.co.uk/2014/09/shellshock-bash-probe-alert-using-fail2ban "Shellshock BASH probe alert using Fail2ban"
