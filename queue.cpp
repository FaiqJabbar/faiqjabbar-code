#include "queue.h"

void createPlaylist_1301213370(playlistLagu &Q){
    Head(Q) = nil;
    Tail(Q) = nil;
}

void createElement_1301213370(infotype laguBaru, adr &pLagu){
    pLagu = new element;
    next(pLagu) = nil;
    info(pLagu) = laguBaru;
}

void enqueue_1301213370(playlistLagu &Q, adr pLagu){
    if (Head(Q) == nil){
        Tail(Q) = pLagu;
        Head(Q) = pLagu;
    }else{
        next(Tail(Q)) = pLagu;
        Tail(Q) = pLagu;
    }
}

void dequeue_1301213370(playlistLagu &Q, adr &pLagu){
    if(Head(Q) == nil){
        cout<<"Kosong Bro!"<<endl;
    }else if(next(Head(Q)) == nil){
        pLagu = Head(Q);
        Head(Q) = nil;
        Tail(Q) = nil;
    }else{
        pLagu = Head(Q);
        Head(Q) = next(pLagu);
        next(pLagu) = nil;
    }
}

void showSemuaLagu_1301213370(playlistLagu Q){
    adr jalan = Head(Q);
    if(Head(Q) == nil){
        cout<<"Kosong Bro!"<<endl;
    }else{
        while(jalan != nil){
            cout<<" Artis : "<<info(jalan).artis;
            cout<<"  Judul : "<<info(jalan).judul<<endl;
            jalan = next(jalan);
        }
    }
}
