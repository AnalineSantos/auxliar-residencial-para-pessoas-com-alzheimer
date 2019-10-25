<p style="text-align: center;"><strong>Auxiliar Residencial Para Pessoas com Alzheimer&nbsp;</strong></p>
<p style="text-align: left;"><strong><em>&nbsp;Objetivo:</em></strong></p>
<p style="text-align: left;"><strong><em>&nbsp;</em></strong>O projeto desenvolvido, tem como objetivo auxiliar e facilitar na rotina diaria de pessoas acometidas com a doen&ccedil;a de Alzheimer&nbsp;ou simplesmente mais avan&ccedil;adas na idade. Ele foi pensado afim de evitar acidentes ou algum trastorno, tranquilizando aqueles que v&atilde;o fazer o uso, bem como a familia ou respons&aacute;vel.</p>
<p style="text-align: left;"><strong><em>Descri&ccedil;&atilde;o:&nbsp;</em></strong></p>
<p style="text-align: left;"><strong><em>&nbsp;&nbsp;</em></strong>Nesse programa, inicialmente, h&aacute; um alarme para indicar vazamento de gases, caso a pessoa esque&ccedil;a o g&aacute;s de cozinha ligado, e um monitorador de portas e janelas, que pode previnir acidentes, informando a pessoa respons&aacute;vel que essas foram abertas.</p>
<p><strong><strong><strong><strong>O alarme para gases combustiveis</strong></strong></strong></strong></p>
<p>&nbsp;</p>
<p>&nbsp;<em>Funcionamento :&nbsp;</em></p>
<p>-As tr&ecirc;s constantes&nbsp;<strong>buzz</strong>,&nbsp;<strong>LEDSinal</strong>&nbsp;e&nbsp;<strong>LEDRed</strong>&nbsp;funcionam como mnem&ocirc;nicos para facilitar a associa&ccedil;&atilde;o dos pinos com suas fun&ccedil;&otilde;es.</p>
<p>&nbsp;</p>
<p>-A vari&aacute;vel <strong>A</strong>&nbsp;&eacute; um inteiro de 16 bits, unsigned, ou seja, sem sinal. Ele &eacute; sempre positivo.</p>
<p>&nbsp;</p>
<p>-A vari&aacute;vel&nbsp;<strong>som</strong>&nbsp;&eacute; um inteiro simples. Ele ser&aacute; a frequ&ecirc;ncia gerada pelo Arduino.</p>
<p><strong>-Sensor</strong>&nbsp;&eacute; uma vari&aacute;vel de 16 bits, mas que s&oacute; usaremos 10. Ela armazenar&aacute; o resultado da leitura do pino A0, que recebe o sinal anal&oacute;gico do sensor MQ-4.</p>
<pre>-pinMode(buzz,OUTPUT);
 pinMode(LEDSinal,OUTPUT);
 pinMode(LEDRed,OUTPUT);</pre>
<p>Todos os tr&ecirc;s s&atilde;o definidos como sa&iacute;da de dados. O pino A0 n&atilde;o &eacute; definido, pois por padr&atilde;o ele &eacute; um pino anal&oacute;gico de entrada.</p>
<p>--&gt;Primeiramente, o&nbsp;que o Arduino faz &eacute; apagar o LED verde e acender o LED vermelho.</p>
<p>--&gt;Por uma caracteristica dos semicondutores de gases, &eacute; dado um per&iacute;odo de aquecimento de 30 segundos, ap&oacute;s esse tempo, o LED vermelho apaga. A&nbsp;calibragem &eacute; feita atrav&eacute;s da vari&aacute;vel&nbsp;<strong>A</strong> e o sensor j&aacute; est&aacute; pronto para fazer leituras.</p>
<ol>
<li>
<p>No sensor MQ-4 h&aacute; um pino de sa&iacute;da digital, positivo, negativo e sa&iacute;da anal&oacute;gica.Essa sa&iacute;da anal&oacute;gica varia entre 0 volt e 5 volts, e representa concentra&ccedil;&otilde;es de gases entre o m&iacute;nimo detect&aacute;vel e o suficiente para saturar o detector.Os valores s&atilde;o convertidos pelo Arduino, que retorna um n&uacute;mero entre 0 e 1.023. A convers&atilde;o anal&oacute;gico pra digital do Arduino tem uma resolu&ccedil;&atilde;o de 10 bits.&nbsp;</p>
<img src="downloads " alt="" /><img style="display: block; margin-left: auto; margin-right: auto;" src="https://meiobit.com/wp-content/uploads/2017/08/20170801mq-4.jpg" alt="mq-4" width="297" height="233" /></li>
<li><strong><strong><strong>O monitorador de portas e/ou janelas (&nbsp;MC-38a )&nbsp; &nbsp;</strong></strong></strong></li>
</ol>
<p style="text-align: left; padding-left: 30px;"><strong>&nbsp;&nbsp;</strong>O Sensor magn&eacute;tico MC-38a funciona como uma chave ou switch, existem dois modelos o NA(Normalmente Aberto) e o NF(Normalmente Fechado), que se referem ao estado do sensor quando ele est&aacute; em contato com a sua outra porte, ou no nosso caso quando a janela ou a porta est&aacute; fechada, o NF quando a porta estiver fechada e as partes dos sensor estiverem em contato ele funcionar&aacute; como um chave aberta, ou um fio, conduzindo tudo que passa por ele, j&aacute; &nbsp;o NA quando no mesmo estado funciona como uma chave aberta, e n&atilde;o conduz nada.&nbsp;</p>
<p style="text-align: left; padding-left: 30px;"><img style="display: block; margin-left: auto; margin-right: auto;" src="https://http2.mlstatic.com/sensor-magnetico-porta-mc-38a-arduinopic-D_NQ_NP_15240-MLB20099418046_052014-F.jpg" alt="Resultado de imagem para MC-38a" width="318" height="251" /></p>
<p style="text-align: left; padding-left: 30px;"><em>*Trabalho por Analine Santos, terceiro ano do curso t&eacute;cnico em Eletrot&eacute;cnica do CEFET-MG</em></p>
<p style="text-align: left; padding-left: 30px;"><em>*Links dos sites usados:&nbsp;</em></p>
<p style="text-align: left; padding-left: 30px;"><em><a href="https://meiobit.com/369757/aprendendo-arduino-03b-construindo-algo-util/">https://meiobit.co9757/aprendendo-arduino-03b-construindo-algo-util/</a></em></p>
<p style="text-align: left; padding-left: 30px;"><em><a href="https://autocorerobotica.blog.br/monitorando-portas-e-janelas-com-sensor-magnetico-mc-38a-e-arduino/">https://autocorerobotica.blog.br/monitorando-portas-e-janelas-com-sensor-magnetico-mc-38a-e-arduino/</a></em></p>
<p>&nbsp;</p>
