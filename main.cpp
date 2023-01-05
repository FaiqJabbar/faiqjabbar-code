#include <iostream>
#include "queue.h"

using namespace std;

int main(){
    playlistLagu Q;
    createPlaylist_1301213370(Q);
    adr p;
    infotype inputlagu;

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    inputlagu.artis = "Artis A"; inputlagu.judul = "Judul A";
    createElement_1301213370(inputlagu, p);
    enqueue_1301213370(Q, p);

    showSemuaLagu_1301213370(Q);

    dequeue_1301213370(Q, p);
    cout<<endl;
    cout<< " Hapus Lagu "<<info(p).judul<<endl<<endl;

    showSemuaLagu_1301213370(Q);
    return 0;
}
