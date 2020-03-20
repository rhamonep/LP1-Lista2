#include "TestaValidaNumero.h"

void TestaValidaNumero::validaNumero(int num){

    try{

        if(num >= 1000)
            throw ValorMuitoAcimaException();
        else if(num > 100)
            throw ValorAcimaException();
        else if(num <= 0)
            throw ValorAbaixoException();

    }catch(ValorAbaixoException ex1){
        ex1.what();
    }catch(ValorAcimaException ex2){
        ex2.what();
    }catch(ValorMuitoAcimaException ex3){
        ex3.what();
    }

}