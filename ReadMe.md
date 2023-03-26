# Keylogger 🔑
<p align="center">
  <img width="96" height="auto" src="img/hydra.svg">
</p>

A keylogger script, specifically made for Windows, that is intrusion detection free from default Window Defender and that lives and runs as an independent process.

***"This Script is made for educational surposes only, unethical use of this script will lead to 
misapproriation, violation and misuse of technology which can be considered a crime. I do not hold any responsibility for the use and effect of this script"***

## Usage
The script is dependency free and can be complied using the latest min-gw64 compiler. Alternatively 
any lightweight C/C++ IDE in the likes of [RedPanda](https://github.com/royqh1979/RedPanda-CPP)(Dev-Cpp fork) or [code::blocks](https://www.codeblocks.org/) can also be used.

## Pros
- As stated dependency free.
- Lives as an independent process.
- Does not get detected by Windows Defener, now called Windows Security.

## Cons
- Only con is that *if* Windows Terminal is installed and is set with the option of *letting windows decide* to handle console processes. It forces out a console even if the script is hard coded not to.

## Todo
- [ ] Add registry change code to auto startup after every boot up.
- [ ] Use socket programming to retreive log file.
- [ ] If the above is too complex, devise a way to get mails after every fixed interval of time.