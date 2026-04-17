# Mad Libs Game
My second program in C. This is a story generator with the main nouns, verbs and adjectives given by the user. However, the story is written by the user. Example in the code, the story I had given is about visit to any type of zoo and seeing and describing an Exhibit. The story however can be changed once you import the story and play with it.

How to compile
-----------------
Simply open VS code and import the project. Have Code Runner set up and the necessary C files set up in VS code to run without problem.
Enter the adject1, adject2, adject3, noun and verb. The code will place it in the appropriate places and generate a Zoo story.

Installing C in Windows if not done
-------------------------------------
1. Go to msys2.org and download the application. After installation, open it and type the following - " pacman -S mingw-w64-ucrt-x86_64-gcc "
2. Check if install using " gcc --version ".
3. Go to msys2 folder on ur files explorer. Go to ucrt64 and copy the gcc location.
4. Go to Environment Variables and click path -> edit and paste the gcc location then and save.
5. Install Coderunners and other C extensions in VS code.