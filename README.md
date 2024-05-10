# isyarat-mak-kau

1. make the project. If you don't know how, the clue is in the first word. If you still don't know how too, ask any LLM (ChatGPT or similar). If you are still reading until here, I'm sorry. Your mom lied. You are not that special.
2. Run the binary. Now you will see the process id (PID) output in the terminal.
3. Open a new terminal and try to send a SIGTERM. Okay I will teach you this one. `kill -15 <PID>`. Notice that you can run this multiple time and the program will not end.
4. Kill the program using SIGKILL.
5. Enable the secret block. (Uncomment the `#define IMNOTANASSAUTHOR` line)
6. Remake the project and run.
7. Again send a SIGTERM. Notice how now the program will end.

