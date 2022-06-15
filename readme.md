# **wavplay: A simple command line .wav player for Windows** #

Plays a .wav file synchronously from the command line.  Simply pass the .wav as an argument.

e.g.

'''start /B wavplay sample.wav'''


## Compiling

wavplay was compiled with "Pelles C" which is available at http://www.smorgasbordet.com/pellesc/

To enable build you will first need to:
- Enable Microsoft extensions in the compiler options
- Add '''winmm.lib''' to the linker under library/object files


## Feedback

Please send feedback to jon123wilson@hotmail.com

Jon

