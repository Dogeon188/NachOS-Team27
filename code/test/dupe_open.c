#include "syscall.h"

int main(void) {
    int success = Create("file_dup.test");
    OpenFileId fid1, fid2;
    int i;
    if (success != 1)
        MSG("Failed on creating file");

    fid1 = Open("file1.test");
    if (fid1 < 0)
        MSG("Failed on opening file");
    
    fid2 = Open("file1.test");
    if (fid2 < 0)
        MSG("Failed on opening duplicate file (Correct)");
    else
        MSG("Opened duplicate file (Incorrect)");

    Halt();
}
