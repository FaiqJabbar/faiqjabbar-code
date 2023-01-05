#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
using namespace std;

#define info(p) (p)->info
#define next(p) (p)->next
#define Tail(p) (p).Tail
#define Head(p) (p).Head
#define nil NULL

struct infotype{
    string artis, judul;
};

typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct playlistLagu{
    adr Head, Tail;
};

void createPlaylist_1301213370(playlistLagu &Q);
void createElement_1301213370(infotype laguBaru, adr &pLagu);
void enqueue_1301213370(playlistLagu &Q, adr pLagu);
void dequeue_1301213370(playlistLagu &Q, adr &pLagu);
void showSemuaLagu_1301213370(playlistLagu Q):

#endif // QUEUE_H_INCLUDED
