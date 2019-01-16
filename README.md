# IFTTT
Mood/emotion potmeter, wordt bewuster van je gevoel/emotie om je beter te voelen

## Concept
Het concept is een box waar jij op kan aangeven hoe je je voelt. Het idee is dat hij op een plek staat waar je minstens 1 keer per dag langs loopt en hem bijwerkt. Dit met het doel dat je bewuster wordt van je eigen gevoel en emoties, wat uiteindelijk helpt gelukkiger te worden. Dit is afgeleid van mediteren waarbij het ook het doel is om bewust te worden van je gevoel en emoties, alleen is dit voor veel mensen een te grote drempel.

Het prototype bestaat uit een houten box met een scherm (scherm van mobiel verbonden via bluetooth met een Android-app), 5 LED-lampjes in verschillende kleuren en een draaiknop. Zodra je aan de draaiknop draait, gaat het brandende lampje uit en een andere aan (afhangend van de positie van de knop). Ieder lampje hoort bij een emotie/gevoel (met een logische kleur). Hoe verder je de knop naar rechts draait, hoe positiever je emotie is. Wanneer je aan de knop draait, zie je ook op het scherm van de box de kleur, emoji en text veranderen in de bijbehorende emotie/gevoel voor een duidelijker gevoel.

## Techische werking
In de map Arduino kun je de code vinden hoe de 5 LED's aan/uit worden gezet doormiddel van de waarde van de potentio meter. Hier wordt ook de waarde van de potentio meter gestuurd naar de Serial met pin 0 (pin voor de transmitter) en met de Bluetooth module (bijvoorbeeld de HC-05) deze waarde doorsturen naar andere apparaten.

In de map Android staat de code van de app waar het beeld veranderd op basis van de waarde die de app binnenkrijgt via Bluetooth (van de potentiometer).

### Meer over het project is te vinden op mijn portfolio site voor de HKU: studenthome.hku.nl/~luuk.siewers
