# Dokumentacja projektu - Odtwarzacz Audio

## 1. Wstęp

### 1.1 Cel projektu

Celem projektu jest stworzenie aplikacji do odtwarzania plików w formatach MP3, Wav oraz FLAC. Aplikacja umożliwia zarządzanie biblioteką plików, odtwarzanie plików audio, kontrolowanie poziomu głośności, pauzowanie, przewijanie oraz ustawienie różnych opcji odtwarzania, takich jak zapętlanie czy losowe odtwarzanie. Projekt wykorzystuje framework Qt w wersji 5 lub 6.

### 1.2 Zakres projektu

Projekt obejmuje następujące funkcjonalności:
- Interfejs użytkownika do zarządzania plikami audio.
- Odtwarzanie plików audio w formatach MP3, WAV, FLAC.
- Kontrolowanie głośności, pauzowanie, przewijanie oraz odtwarzanie w kolejce.
- Dodawanie folderów do biblioteki aplikacji.
- Podgląd szczególowych informacji o pliku, takich jak nazwa pliku, rozszerzenie, rozmiar oraz czas trwania pliku audio.

## 2. Założenia

### 2.1 Funkcjonalne

- **Zarządzanie biblioteką plików**: użytkownik może przeglądać i dodawać foldery z plikami audio do biblioteki.
- **Odtwarzanie plików audio**: Aplikacja umożliwia odtwarzanie plików audio.
- **Kontrola odtwarzania**: Aplikacja oferuje przyciski do pauzowania, wznowienia, przewijania (do przodu i do tyłu) oraz regulacji głośności.
- **Kolejka odtwarzania**: użytkownik może włączyć opcję zapętlania pojedynczego pliku lub całej kolejki odtwarzania. Istnieje także opcja losowego odtwarzania oraz automatycznego odtwarzania kolejnego utworu z kolejki.
- **Informacje o plikach**: Aplikacja umożliwia podgląd szczegółowych informacji o pliku.

### 2.2 Niefunkcjonalne

- **Obsługa formatów audio**: Aplikacja odtwarza pliki audio w formatach MP3, WAV oraz FLAC.
- **Intuicyjny interfejs użytkownika**: Aplikacja powinna być prosta w obsłudze.

## 3. Wymagania

### 3.1 Wymagania sprzętowe

- **System operacyjny**: Windows 11.
- **Wolne miejsce na dysku**: 100MB.
- **Dźwięk**: karta dźwiękowa obsługująca standardowe formaty audio.

### 3.2 Wymagania programowe

- **Biblioteka Qt**: Qt 5.15 lub Qt 6 (w zależności od wersji).
- **Kompilator C++**: kompilator obsługujący C++11 lub nowszy.

## 4. Opis klas i funkcjonalności

### 4.1 Diagram klas UML

![Struktura klas](DiagramKlas.png)

### 4.2 Opis klas

- **`FileManager`**: klasa odpowiedzialna za zarządzanie plikami. Odpowiada za dodawanie, usuwanie oraz zapis i odczyt ścieżek plików audio.
- **`Player`**: Klasa odpowiedzialna za odtwarzanie plików audio. Korzysta z  `QMediaPlayer` i `QAudioOutput` do odtwarzania dźwięku.
- **`PlayerQueve`**: klasa obsługująca kolejkę odtwarzania plików audio.
- **`FileManagerWindow`**: okno dialogowe do zarządzania folderami plików.

## 5. Interfejs użytkownika

![Struktura klas](OdtwarzaczPlikowAudioZrzutEkranu.png)
![Struktura klas](OdtwarzaczPlikowAudioZrzutEkranu2.png)