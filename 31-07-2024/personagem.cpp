#include <iostream>
using namespace std;
int main()
{
    int personagem;
    // Atributos iniciam abaixo
    int pontos = 20;
    int reducao = 0;
    int forca = 0; // Força
    int des = 0;   // Destreza
    int con = 0;   // Constituição
    int intl = 0;  // Inteligência
    int sab = 0;   // Sabedoria
    int car = 0;   // Carisma
    // Habilidades iniciam abaixo
    int pontosB = 40;
    int reducaoB = 0;
    int af = 0;   // Armas de Fogo
    int ab = 0;   // Armas Brancas
    int atl = 0;  // Atletismo
    int fur = 0;  // Furtividade
    int inf = 0;  // Infiltração
    int lut = 0;  // Lutar
    int med = 0;  // Medicina
    int per = 0;  // Persuasão
    int tec = 0;  // Tecnologia
    int cond = 0; // Condução
    int eti = 0;  // Etiqueta
    int idi = 0;  // Idiomas
    // O implante cibernetico começa abaixo
    int imp;    // Nome do implante cibernetico
    int alt;    // Alternativa
    int gangue; // Gangues
    int conex;  // Conexões

    cout << "Voce vive em um mundo cyberpunk,na cidade de Uberaba, em 2052, onde o consumismo eh o dono de tudo e de todos. O governo eh totalmente controlado por empresas ricas enquanto a maior parte do povo vive numa constante miseria\nVoce tem a opcao de escolher entre tres personagens para viver essa aventura." << endl;
    cout << "\nEscolha seu personagem:" << endl;
    cout << "1-Angelo Moriuchi, 2-Maxine Alekseeva e 3-Mary Josie" << endl;
    cin >> personagem;

    switch (personagem)
    {
    case 1:
        cout << "Nome: Angelo Moriuchi\nApelido: Angel of the Night\nOrigem: Filho de pai brasileiro e mae japonesa, nasceu eu SP capital\nData de nascimento: Nasceu dia 13/07/2033\nSexo:Masculino\nClasse Social:Pertence a uma classe social baixa, e luta diariamente para sobreviver\nOcupacao: Rebelde e fugitivo\nHistoria: Angelo teve uma infancia conturbada, seus pais foram mortos pelo governo quando ele ainda era crianca, por isso todo seu odio pelo sistema.\nEle ajuda os mais necessitados roubando itens que sao necessarios para sobreviver e os distribui, como uma especie de Robin Hood futurista.\nPor a maioria de suas boas acoes serem realizadas a noite, ele ganhou o apelido de Angel of the Night\nMotivacao: Sua principal motivacao eh dar um fim a era do consumismo cyberpunk e estabelcer uma sociedade mais justa. Mesmo que nao consiga mudar o mundo, Angelo quer fazer o melhor possivel para garantir uma boa qualidade de vida a todos\nAparencia: Angelo mede 1,85, possui cabelos avermelhados, eh de pele branca, possui um nariz fino e olhos grandes na cor castanha. Geralmente ele utiliza mascaras facias para esconder sua identidade, ja que ele eh um fugitivo do governo.\nSaldo: R$3000,00\n Reputacao: 3" << endl;
        break;

    case 2:
        cout << "Nome: Maxine Alekseeva.\nApelido: Max.\nOrigem: Sao Petersburgo,Russia, filha de Alexei, um Russo refugiado, que ao chegar teve um caso com uma brasileira de familia rica.\nData de Nascimento:31/07/2040.\nSexo: Feminino.\nClasse Social: Media, ela e o pai vivem com o dinheiro da pensao dada pela familia da mae.\nOcupacao: Saiu da escola para cuidar do pai.\nHistoria: Max eh uma crianca atentada que aprendeu todas as artimanhas que sabe com o pai, agora ela cuida dele apos o grupo ditador da regiao onde ela vive deixar ele acamado para dar uma licao por ir contra seus valores, ela nao ha contato com a familia por parte de mae, alem do dinheiro que ela recebe mensalmente.\nPassa maior parte do tempo pregando pecas e indo contra as gangues que dominam a regiao aonde ela mora, mesmo que sempre saia machucada nesses confrontos, quanto mais ela cresce mais sua sede de vinganca aumenta e mais hipocrita se torna, sendo igual aos lideres da gangue que ela tanto detesta.\nMotivacao: Vinganca.\nAparencia: Max mede 1,42cm, eh parda com cabelos uma mistura de ruivo com castanho, cortado curto estilo Pixie, olhos azuis, usa roupas desleixadas e nao se preocupa com sua aparencia, muitas vezes eh confundida com um menino e ate tira proveito disso.\nSaldo: R$5000,00.\nReputacao: 1" << endl;
        break;

    case 3:
        cout << "Nome: Mary Josie\nApelido: Chatinha\nOrigem: Foi abandonada em um orfanato no Rio Grande do Sul\nData de nascimento: 31/03/2024\nSexo: Feminino\nClasse Social: Ela se tornou muito rica por causa de seua pais adotivos\nOcupacao: Nao trabalha, por causa da quantidade absurda de dinheiro\nHistoria: Ela eh uma mulher que ja cansou de sua vida, nao ver razao para viver, se envolveu nas drogas, nunca achou um parceiro para dividir seu sonho e quase nao teve nenhum amigo em sua vida por causa dos seguranças que seus pais pcontrataram,que no momento devem estar mortos, seus pais sempre tentaram controlar ela e o seu futuro, no momento do acontecimento eles nao estavam na cidade de Uberaba e nem conseguem voltar por causa do bloqueio que fizeram em todas as entradas possiveis.\nPorem neste momento ela se sente uma pessoa livre apesar do caos pela cidade.\nMotivacao: Seu objetivo e conseguir sobreviver sozinha, algo que ela nunca precisou, ter sua liberdade e tentar sonhar denovo!\nAparencia: Bem alta, magra, com o cabelo curto, preto e com franja, suas roupas de grife sempre muito elegante, olhos castanhos e cor de pele branca.\nSaldo: R$15000,00.\nReputacao:-1" << endl;
        break;
    }
    // Comeco da distribuicao dos atributos
    cout << "\nAgora que voce ja escolheu seu personagem, voce escolhera seus atributos entre Forca, Destreza, Constituicao, Inteligencia, Sabedoria e Carisma\nVoce tera ate 20 pontos para gastar entre as habilidades escolhidas,com o limite de 5 pontos por habilidade, com todas iniciando em 0.\n"
         << endl;
         //Pontos de Força
    if (pontos > 0)
    {
        cout << "Escolha seus pontos de Forca: " << endl;
        cin >> forca;
        if (forca > 0 && forca <= 5)
        {
            reducao = reducao + forca;
            pontos = pontos - reducao;
            cout << pontos;
            cout << "Pontos de Forca:" << forca << endl;
        }
        else
        {
            cout << "Opcao invalida\n"
                 << endl;
        }
    }
    else
    {
        cout << "Você esta sem pontos de atributos" << endl;
    }

//Pontos de Destreza    
    if (pontos > 0)
    {
        cout << "\nEscolha seus pontos de Destreza: " << endl;
        cin >> des;
        if (des > 0 && des <= 5)
        {
            reducao = reducao + des;
            pontos = pontos - reducao;
            cout << "Pontos de Destreza:" << des << endl;
        }
        else
        {
            cout << "Opcao invalida" << endl;
        }
    }
    else
    {
        cout << "Você esta sem pontos de atributos" << endl;
    }
    
    //Pontos de Constituição
if (pontos > 0)
    {
    cout << "\nEscolha seus pontos de Constituicao :" << endl;
    cin >> con;
    if (con > 0 && con <= 5)
    {
        reducao = reducao + con;
        pontos = pontos - reducao;
        cout << "Pontos de Constituicao:" << con << endl;
    }
    else
    {
        cout << "Opcao invalida" << endl;
    }
    }
    else
    {
        cout << "Você está sem pontos de atributos" << endl;
    }

//Pontos de Inteligência
    if (pontos > 0)
    {
    cout << "\nEscolha seus pontos de Inteligencia :" << endl;
    cin >> intl;
    if (intl > 0 && intl <= 5)
    {
        reducao = reducao + intl;
        pontos = pontos - reducao;
        cout << "Pontos de Inteligencia:" << intl << endl;
    }
    else
    {
        cout << "Opcao invalida" << endl;
    }
    }
   else
   {
    cout<<"Voce esta sem pontos de atributos"<<endl;
   }
   
   //Pontos de Sabedoria
   if (pontos > 0)
   {
    cout << "\nEscolha seus pontos de Sabedoria:" << endl;
    cin >> sab;
    if (sab > 0 && sab <= 5)
    {
        reducao = reducao + sab;
        pontos = pontos - reducao;
        cout << "Pontos de Sabedoria:" << sab << endl;
    }
    else
    {
    cout << "Opcao invalida" << endl;
    }
    }
   else
   {
    cout<<"Voce esta sem pontos de atributos"<<endl;
   }
   
   //Pontos de Carisma
   if (if (pontos > 0))
   {
    cout << "\nEscolha seus pontos de Carisma:" << endl;
    cin >> car;
    if (car > 0 && car <= 5)
    {
        reducao = reducao + car;
        pontos = pontos - reducao;
        cout << "Pontos de Carisma:" << car << endl;
    }
    else
    {
        cout << "Opcao invalida" << endl;
    }
   }
   else {
    cout<<"Voce esta sem pontos de atributos"<<endl;
   }
   
    
    // Comeco da distribuicao das habilidades
    cout << "Agora que voce ja escolheu seus atributos, voce escolhera suas habilidades entre Arma de Fogo, Arma Branca, Atletismo, Furtividade, Infiltracao, Lutar, Medicina, Persuasao, Tecnologia, Condução, Etiqueta e Idiomas\nVoce tera ate 40 pontos para gastar entre as habilidades escolhidas,com o limite de 10 pontos por habilidade, com todas iniciando em 0.\n"
         << endl;
         
//Pontos de Arma de Fogo
      if (pontos>0)
    {
        cout << "\nEscolha seus pontos de Arma de Fogo: " << endl;
    cin >> af;
    if (af > 0 && ab <= 10)
    {
        reducaoB = reducaoB + af;
        pontosB = pontosB - reducaoB;
        cout << "Pontos Arma de Fogo:" << af << endl;
    }
    else
    {
        cout << "Opcao invalida!\n"
             << endl;
    }
    
      }
      else{
        cout<<"Voce nao possui mais pontos de habilidade"<<endl;
      }
         
    
    //Pontos de Arma Branca
    if (pontos > 0)
   {
    cout << "\nEscolha seus pontos de Arma Branca:" << endl;
    cin >> ab;
    if (ab > 0 && ab <= 10)
    {
        reducaoB = reducaoB + ab;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Arma branca:" << ab << endl;
    }
    else
    {
        cout << "Opcao invalida!\n"<< endl;
    }
     }
   else
   {
    cout<<"Voce esta sem pontos de habilidades"<<endl;
   }
   
   //Pontos de Atletismo
   if (pontos>0)
   {
    cout << "\nEscolha seus pontos de Atletismo:" << endl;
    cin >> atl;
    if (atl > 0 && atl <= 10)
    {
        reducaoB = reducaoB + atl;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Atletismo:" << atl << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
   }
   
    
    }
    //Pontos de Furtividade 
    if (pontos>0)
    {
    cout << "\nEscolha seus pontos de Furtividade:" << endl;
    cin >> fur;
    if (fur > 0 && fur <= 10)
    {
        reducaoB = reducaoB + fur;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Furtividade:" << fur << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }
    }
   else
   {
    cout<<"Voce esta sem pontos de habilidades"<<endl;
   }

    //Pontos de Infiltração
    if (pontos>0)
    {
    cout << "\nEscolha seus pontos de Infiltracao:" << endl;
    cin >> inf;
    if (inf > 0 && inf <= 10)
    {
        reducaoB = reducaoB + inf;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Infiltracao:" << inf << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }
     }
   else
   {
    cout<<"Voce esta sem pontos de habilidades"<<endl;
   }

//Pontos de Luta
 if (pontos>0)
    {
    cout << "\nEscolha seus pontos de Luta:" << endl;
    cin >> lut;
    if (lut > 0 && lut <= 10)
    {
        reducaoB = reducaoB + lut;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Luta:" << lut << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }
 }
   else
   {
    cout<<"Voce esta sem pontos de habilidades"<<endl;
   }

//Pontos de Medicina
    if (pontos>0)
    {
        /cout << "\nEscolha seus pontos de Medicina:" << endl;
    cin >> med;
    if (med > 0 && med <= 10)
    {
        reducaoB = reducaoB + med;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Medicina:" << med << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }
    }
    else{
        cout<<"VVoce esta sem pontos de habilidade"<
    }
    
    //Pontos de Persuasao
 if (pontos>0)
    {
    cout << "\nEscolha seus pontos de Persuasao: " << endl;
    cin >> per;
    if (per > 0 && per <= 10)
    {
        reducaoB = reducaoB + per;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Persuasao:" << per << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }
    }
   else
   {
    cout<<"Voce esta sem pontos de habilidades"<<endl;
   }


    //Pontos de Tecnologia 
    if (pontos>0)
    {
     o
    cout << "\nEscolha seus pontos de Tecnologia: " << endl;
    cin >> tec;
    if (med > 0 && med <= 10)
    {
        reducaoB = reducaoB + tec;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Tecnologia:" << tec << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
     
 }
   else
   {
    cout<<"Voce esta sem pontos de habilidades"<<endl;
   }
//pontos de conducao
        << endl;
    }
    cout << "\nEscolha seus pontos de Conducao:" << endl;
    cin >> cond;
    if (cond > 0 && cond <= 10)
    {
        reducaoB = reducaoB + cond;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Conducao:" << cond << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }
    //Pontos de etiqueta
    cout << "\nEscolha seus pontos de Etiqueta:" << endl;
    cin >> eti;
    if (eti > 0 && eti <= 10)
    {
        reducaoB = reducaoB + eti;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Etiqueta:" << eti << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }
    //Pontos de idioma
    cout << "\nEscolha seus pontos de Idiomas:" << endl;
    cin >> idi;
    if (idi > 0 && idi <= 10)
    {
        reducaoB = reducaoB + idi;
        pontosB = pontosB - reducaoB;
        cout << "Pontos de Idioma:" << idi << endl;
    }
    else
    {
        cout << "Opcao invalida\n"
             << endl;
    }

    cout << "\nEscolha o implante cibernetico presente no seu personagem:" << endl;//se a pessoa gostaria de ter um omplante para ajudar ela vencer o jogo
    cout << "1-Olho Bionico: aumenta o raio de visao e melhora o desmpenho do pesonagem em perceber o seu redor. Valor: M$2000,00(valor unitario)\n2-Perna robotica: ajuda a sobreviver em seu dia a dia e aumenta a sua velocidade. Valor: R$7000,00(valor unitario)\n3- Braco eletronico: sistema de lancamento de projeteis, lanca um missil por um de seus bracos. Valor: R$9000,00(valor unitario)\n 4-Nenhum" << endl;
    cin >> imp;
    switch (imp)
    {
    case 1:
        cout << "Parabens, agora voce possui um olho bionico implantado em voce e adquiriu mais 1 ponto de furtividade e destreza.\n"
             << endl;
        break;
    case 2:
        cout << "Parabens, agora voce possui uma perna robotica, adquiriu velocidade e 3 pontos de sabedoria e destreza.\n"
             << endl;
        break;
    case 3:
        cout << "Parabens, agora voce possui um braco eletronico implatado, voce adquiriu mais 2 pontos de forca e destreza.\n"
             << endl;
        break;
    default:
        cout << "Entao voce nao quer ter nada implantado em voce? Beleeeza." << endl;
        break;
    }

    cout << "Voce deseja entrar para alguma gangue? 1(sim) ou 2(nao) " << endl;
    cin >> atl;
    if (atl = 1)
    {
        cout << "Ok, escolha entre as seguintes gangues:\n1-Rebeliao\n2-Aristocratas\n3-Nenhum" << endl;//escolha de qual topo de gangue deve seguir
        cin >> gangue;
        switch (gangue)
        {
        case 1:
            cout << "Voce agora faz parte do grupo que se rebela contra o governo e sofrera as consequencias disso" << endl;
            break;

        case 2:
            cout << "Voce agora faz parte da aristocracia e deve eliminar qualquer um que seja uma ameaca para seu grupo" << endl;
            break;
        }
    }
    else
    {
        cout << "Voce eh um cidadao solitario e decide nao se juntar a nenhum grupo" << endl;
    }
    cout << "As suas conexoes sao:" << endl;//Conexoes e suas consequencias
    if (gangue = 1)
    {
        cout << "Voce faz parte do grupo dos rebeldes mas possui infiltrados dentro do governo que te ajudam e te passam informacoes" << endl;
    }
    else
    {
        cout << "Voce eh membro da aristocracia e nao liga para como o resto da populacao vive, desde que voce esteja bem, tanto faz o resto" << endl;
    }
    cout << "\nSUA FICHA ESTA PRONTA!!!!!!!\n\n\nFICHA:\n"//ficha completa das escolhas do jogador
         << endl;
    switch (personagem)//personagem que o jogador escolheu
    {
    case 1:
        cout << "Nome: Angelo Moriuchi\nApelido: Angel of the Night\nOrigem: Filho de pai brasileiro e mae japonesa, nasceu eu SP capital\nData de nascimento: Nasceu dia 13/07/2033\nSexo:Masculino\nClasse Social:Pertence a uma classe social baixa, e luta diariamente para sobreviver\nOcupacao: Rebelde e fugitivo\nHistoria: Angelo teve uma infancia conturbada, seus pais foram mortos pelo governo quando ele ainda era crianca, por isso todo seu odio pelo sistema.\nEle ajuda os mais necessitados roubando itens que sao necessarios para sobreviver e os distribui, como uma especie de Robin Hood futurista.\nPor a maioria de suas boas acoes serem realizadas a noite, ele ganhou o apelido de Angel of the Night\nMotivacao: Sua principal motivacao eh dar um fim a era do consumismo cyberpunk e estabelcer uma sociedade mais justa. Mesmo que nao consiga mudar o mundo, Angelo quer fazer o melhor possivel para garantir uma boa qualidade de vida a todos\nAparencia: Angelo mede 1,85, possui cabelos avermelhados, eh de pele branca, possui um nariz fino e olhos grandes na cor castanha. Geralmente ele utiliza mascaras facias para esconder sua identidade, ja que ele eh um fugitivo do governo.\nSaldo: R$3000,00\n Reputacao: 3" << endl;
        break;

    case 2:
        cout << "Nome: Maxine Alekseeva.\nApelido: Max.\nOrigem: Sao Petersburgo,Russia, filha de Alexei, um Russo refugiado, que ao chegar teve um caso com uma brasileira de familia rica.\nData de Nascimento:31/07/2040.\nSexo: Feminino.\nClasse Social: Media, ela e o pai vivem com o dinheiro da pensao dada pela familia da mae.\nOcupacao: Saiu da escola para cuidar do pai.\nHistoria: Max eh uma crianca atentada que aprendeu todas as artimanhas que sabe com o pai, agora ela cuida dele apos o grupo ditador da regiao onde ela vive deixar ele acamado para dar uma licao por ir contra seus valores, ela nao ha contato com a familia por parte de mae, alem do dinheiro que ela recebe mensalmente.\nPassa maior parte do tempo pregando pecas e indo contra as gangues que dominam a regiao aonde ela mora, mesmo que sempre saia machucada nesses confrontos, quanto mais ela cresce mais sua sede de vinganca aumenta e mais hipocrita se torna, sendo igual aos lideres da gangue que ela tanto detesta.\nMotivacao: Vinganca.\nAparencia: Max mede 1,42cm, eh parda com cabelos uma mistura de ruivo com castanho, cortado curto estilo Pixie, olhos azuis, usa roupas desleixadas e nao se preocupa com sua aparencia, muitas vezes eh confundida com um menino e ate tira proveito disso.\nSaldo: R$5000,00.\nReputacao: 1" << endl;
        break;

    case 3:
        cout << "Nome: Mary Josie\nApelido: Chatinha\nOrigem: Foi abandonada em um orfanato no Rio Grande do Sul\nData de nascimento: 31/03/2024\nSexo: Feminino\nClasse Social: Ela se tornou muito rica por causa de seua pais adotivos\nOcupacao: Nao trabalha, por causa da quantidade absurda de dinheiro\nHistoria: Ela eh uma mulher que ja cansou de sua vida, nao ver razao para viver, se envolveu nas drogas, nunca achou um parceiro para dividir seu sonho e quase nao teve nenhum amigo em sua vida por causa dos seguranças que seus pais pcontrataram,que no momento devem estar mortos, seus pais sempre tentaram controlar ela e o seu futuro, no momento do acontecimento eles nao estavam na cidade de Uberaba e nem conseguem voltar por causa do bloqueio que fizeram em todas as entradas possiveis.\nPorem neste momento ela se sente uma pessoa livre apesar do caos pela cidade.\nMotivacao: Seu objetivo e conseguir sobreviver sozinha, algo que ela nunca precisou, ter sua liberdade e tentar sonhar denovo!\nAparencia: Bem alta, magra, com o cabelo curto, preto e com franja, suas roupas de grife sempre muito elegante, olhos castanhos e cor de pele branca.\nSaldo: R$15000,00.\nReputacao:-1" << endl;
        break;
    }
    cout << "Atributos: " << endl;
    cout << "Pontos de Forca:" << forca << endl;
    cout << "Pontos de Destreza:" << des << endl;
    cout << "Pontos de Constituicao:" << con << endl;
    cout << "Pontos de Inteligencia:" << intl << endl;
    cout << "Pontos de Sabedoria:" << sab << endl;
    cout << "Pontos de Carisma:" << car << endl;
    cout << "\nHabilidades:" << endl;
    cout << "Pontos Arma de Fogo:" << af << endl;
    cout << "Pontos de Arma Branca:" << ab << endl;
    cout << "Pontos de Atletismo:" << atl << endl;
    cout << "Pontos de Furtividade:" << fur << endl;
    cout << "Pontos de Infiltracao:" << inf << endl;
    cout << "Pontos de Luta:" << lut << endl;
    cout << "Pontos de Medicina:" << med << endl;
    cout << "Pontos de Persuasao:" << per << endl;
    cout << "Pontos de Tecnoloia:" << tec << endl;
    cout << "Pontos de Conducao:" << cond << endl;
    cout << "Pontos de Etiqueta:" << eti << endl;
    cout << "Pontos de Idioma:" << idi << endl;

    cout << "\nImplante Cibernetico:" << endl;//Imp
    switch (imp)
    {
    case 1:
        cout << "Parabens, agora voce possui um olho bionico implantado em voce e adquiriu mais 1 ponto de furtividade e destreza.\n"
             << endl;
        break;
    case 2:
        cout << "Parabens, agora voce possui uma perna robotica, adquiriu velocidade e 3 pontos de sabedoria e destreza.\n"
             << endl;
        break;
    case 3:
        cout << "Parabens, agora voce possui um braco eletronico implatado, voce adquiriu mais 2 pontos de forca e destreza.\n"
             << endl;
        break;
    default:
        cout << "Entao voce nao quer ter nada implantado em voce? Beleeeza." << endl;
        break;
    }
    cout << "As suas conexoes sao:" << endl;//Qual grupo que o user faz parte
    if (gangue = 1)
    {
        cout << "Voce faz parte do grupo dos rebeldes mas possui infiltrados dentro do governo que te ajudam e te passam informacoes" << endl;
    }
    else
    {
        cout << "Voce eh membro da aristocracia e nao liga para como o resto da populacao vive, desde que voce esteja bem, tanto faz o resto" << endl;
    }
}
