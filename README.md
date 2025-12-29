# Anti-Tic-Tac-Toe (Qt / C++)

## Projektbeschreibung
Dieses Projekt wurde im Rahmen einer Bewerbungsaufgabe für die Ausbildung
zum **Fachinformatiker für Anwendungsentwicklung** bei **adesso** entwickelt.

Es handelt sich um eine Variante des klassischen Spiels Tic-Tac-Toe
, bei der ein Spieler verliert, sobald er drei identische
Symbole in einer Reihe, Spalte oder Diagonale platziert.

## Spielregeln
- Zwei Spieler (X und O)
- Abwechselnde Spielzüge
- Standardmäßig ist eine Spielfeldgröße von 4 × 4 vorgegeben.
  Zusätzlich wurde eine variable Spielfeldgröße von 3 × 3 bis 10 × 10 implementiert.
- Drei gleiche Symbole in einer Reihe, Spalte oder Diagonale führen zum Verlust
- Unentschieden, wenn das Spielfeld vollständig gefüllt ist

## Funktionaler Umfang
- Grafische Benutzeroberfläche auf Basis von Qt (Widgets)
- Flexible Anpassung der Spielfeldgröße
- Anzeige der Spielregeln über eine Schaltfläche
- Neustart des Spiels mit gleicher oder neuer Spielfeldgröße
- Strukturierter, gut dokumentierter und wartbarer Quellcode

## Eingesetzte Technologien
- Programmiersprache: C++
- Framework: Qt (Widgets)
- Entwicklungsumgebung: Qt Creator

## Projektstruktur
├── main.cpp           # Einstiegspunkt der Anwendung
├── gamewidget.h       # Deklaration der Klasse GameWidget
├── gamewidget.cpp     # Implementierung der Klasse GameWidget
├── gamewidget.ui      # UI-Datei, erstellt mit Qt Designer
└── README.md          # Projektbeschreibung und Nutzungshinweise

## Verwendung des Projekts
Zur Ausführung des Projekts stehen zwei alternative Möglichkeiten zur Verfügung.

### Alternative 1: Erstellung einer Qt-Widgets-Anwendung
1. Start von Qt Creator
2. Auswahl von „Datei → Neues Projekt“
3. Auswahl von „Anwendung → Qt Widgets Application“
4. Vergabe eines geeigneten Projektnamens (z. B. AntiTicTacToe)
5. Auswahl des Speicherorts
6. Auswahl des Build-Systems (CMake oder qmake)
7. Auswahl eines passenden Qt-Kits (z. B. Desktop Qt 6)
8. Auswahl der Basisklasse „QWidget“
9. Erstellung des Projekts

Anschließend können die entsprechenden Codeabschnitte aus diesem Dokument
in die jeweiligen Projektdateien übernommen werden.

### Alternative 2: Klonen des Git-Repositories
Das vollständige Projekt kann alternativ über folgendes GitHub-Repository bezogen werden:  
https://github.com/lekoumboujoel/Anti_Tic-Tac-Toe

## Ausführung des Programms
1. Öffnen des Projekts in Qt Creator
2. Auswahl eines geeigneten Qt-Kits
3. Kompilieren und Starten der Anwendung
4. Auswahl der gewünschten Spielfeldgröße
5. Beginn des Spiels

