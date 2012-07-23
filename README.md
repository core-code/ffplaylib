ffplaylib
=======

ffplaylib is a collection of code (wouldn't call it "library") that allows SDL based fullscreen apps to show videos using ffmpeg. The main use case is games that want to show cut-scene videos. 99.99% of the code comes from ffmpeg and therefore everything is GPLed. Works on Linux and Windows, but not on Mac OS X (functions are stubbed out to allow it to compile).

<code>
void mainLoop(void)
{    
	 MySDLInit(); // init sdl and set video mode

loop:
    while(!done)
	{        
        if (!isPlayingVideo())
        {
			MyRender(); //render your app/game
        }
        else
        	printf("videoframe");
        
        
		SDL_Event event;
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_KEYDOWN:
                case SDL_KEYUP:
                {
                    if (isPlayingVideo()) // stop video when key pressed
                    {
                        stopVideo();
                        
                        goto done;
                    }
                    else
                    {
                        MyProcessKeys(); // process input for app/game
                    }
                }
					break;
                case FF_QUIT_EVENT:
                    break;
                case FF_ALLOC_EVENT: // dont forget this
                    ff_alloc_handler(event.user.data1);
                    break;
                case FF_REFRESH_EVENT: // dont forget this
                    ff_refresh_handler(event.user.data1);
                    break;
            }
        }

		if (someEventThatStopsTheGameAndStartsTheVideo)
		{
	        /*release your game*/
            Mix_CloseAudio(); // shut down audio if used
            SDL_Quit(); // shut down sdl 
            SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO); // re-init sdl
            
            screen = SDL_SetVideoMode(w, h, 0, SDL_FULLSCREEN);
    
            
            startVideo(path, screen);
            done = FALSE;
            
            goto loop;
		}
    }
    

    
done:
    /* shut down SDL go somewhere else and maybe come back to the main loop for another game*/
}
</code>