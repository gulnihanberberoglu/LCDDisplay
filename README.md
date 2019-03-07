<p style="margin-bottom: 12.0pt; background: white;"><strong><span style="font-family: 'Segoe UI',sans-serif; color: #24292e;">LCD DİSPLAY</span></strong></p>
<p style="background: white; box-sizing: border-box; font-variant-ligatures: normal; font-variant-caps: normal; orphans: 2; text-align: start; widows: 2; -webkit-text-stroke-width: 0px; text-decoration-style: initial; text-decoration-color: initial; word-spacing: 0px; margin: 0cm 0cm 12.0pt 0cm;"><strong style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span style="font-family: 'Segoe UI',sans-serif; color: #24292e;">&Ouml;zet:</span></span></strong></p>
<p><span style="font-size: 10pt; font-family: 'times new roman', times;">Proje Tiva C kartını kullanarak yanan ledin rengine g&ouml;re 2 satırlık LCD Display de yazı yazan, C dilinde geliştirilmiştir. Uygulamada 4 farklı led kullanılacak olup her bir rengin yanmasıyla LCD Display de yazılacak yazının y&ouml;n&uuml; ve şekli</span></p>
<ul style="list-style-type: disc;">
<li><span style="font-size: 10pt; font-family: 'times new roman', times;"><span style="text-decoration: underline;">Kırmızı led yandığı zaman:</span> &Ouml;nce &uuml;st satırda &lsquo;kocaeli uni&rsquo; yazması, 2 saniye sonra alt satırda &lsquo;ad soyad&rsquo; yazması</span></li>
<li><span style="font-size: 10pt; font-family: 'times new roman', times;"><span style="text-decoration: underline;">Beyaz led yandığı zaman:</span> &Ouml;nce alt satırda &lsquo;ad soyad&rsquo; yazması, 2 saniye sonra &uuml;st satırda &lsquo;kocaeli uni&rsquo; yazması</span></li>
<li><span style="font-size: 10pt; font-family: 'times new roman', times;"><span style="text-decoration: underline;">Yeşil led yandığı zaman:</span> &Ouml;nce &uuml;st satırda soldan sağa kaydırarak &lsquo;kocaeli uni&rsquo; yazması, 2 saniye sonra alt satırda soldan sağa kaydırarak &lsquo;ad soyad&rsquo; yazması</span></li>
<li><span style="font-size: 10pt; font-family: 'times new roman', times;"><span style="text-decoration: underline;">Mavi led yandığı zaman:</span> &Ouml;nce &uuml;st satırda sağdan sola kaydırarak &lsquo;kocaeli uni&rsquo; yazması, 2 saniye sonra alt satırda sağdan sola kaydırarak &lsquo;ad soyad&rsquo; yazması</span></li>
</ul>
<p style="margin-bottom: 16.9pt; tab-stops: 35.4pt;"><span style="font-size: 10pt; font-family: 'times new roman', times;">yukarıda belirtildiği gibi g&ouml;sterilecektir.</span></p>
<p style="margin-bottom: 16.9pt; tab-stops: 35.4pt;"><span style="font-size: 10pt; font-family: 'times new roman', times;">Ayrıca program başlangı&ccedil;ta rastgele bir led yakıp, ledler i&ccedil;in belirtilen durumlarda yazılar LCD Display e tamamen yazıldıktan sonra programın 3 saniye beklemesi ve rastgele yeni bir ledi yakıp diğer ledleri s&ouml;nd&uuml;rmesi kullanıcıya g&ouml;sterilmektedir. Program sonsuz bir d&ouml;ng&uuml;de &ccedil;alıştırılmaktadır.</span></p>
<p style="background: white; margin: 0cm 0cm 12.0pt 0cm;"><strong><span style="font-family: 'Segoe UI',sans-serif; color: #24292e;">Genel Yapı:</span></strong></p>
<p style="background: white; margin: 0cm 0cm 12.0pt 0cm;"><span style="box-sizing: border-box; font-size: 10pt; font-family: 'times new roman', times;">Problemin &ccedil;&ouml;z&uuml;m&uuml; C programlama dili aracılığı ile geliştirilmiştir. Proje i&ccedil;in Tiva C kartı kullanılmıştır.</span></p>
<p style="background: white; margin: 0cm 0cm 12.0pt 0cm;"><span style="font-size: 10pt; font-family: 'times new roman', times;">LCD Display&rsquo;in giriş &ccedil;ıkış bağlantıları i&ccedil;in aşağıdaki pin haritası kullanılmıştır.</span></p>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="text-indent: 35.4pt; line-height: normal; margin: 0cm 0cm 0.0001pt 35.4pt;">-PIN MAP-</p>
<p style="text-indent: 35.4pt; line-height: normal; margin: 0cm 0cm .0001pt 35.4pt;"><span style="font-size: 10.0pt;">VSS-GND </span><span style="font-size: 10.0pt;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</span></p>
<p style="text-indent: 35.4pt; line-height: normal; margin: 0cm 0cm .0001pt 35.4pt;"><span style="font-size: 10.0pt;">VDD-VCC&nbsp; &nbsp; &nbsp; &nbsp; </span></p>
<p style="text-indent: 35.4pt; line-height: normal; margin: 0cm 0cm .0001pt 35.4pt;"><span style="font-size: 10.0pt;">VEE-GND(for contrast, but we dont have the Pot)&nbsp; &nbsp; &nbsp;&nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 35.4pt;"><span style="font-size: 10.0pt;">&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB7------PB7&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB6------PB6&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB5------PB5&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB4------PB4&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB3------PB3&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB2------PB2&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB1------PB1&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">DB0------PB0&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">R/W------PE4&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">RS-------PE5&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;">&nbsp;</p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">E--------PE3&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">&nbsp;&nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">LED+-----3.3V&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</span></p>
<p style="line-height: normal; margin: 0cm 0cm .0001pt 70.8pt;"><span style="font-size: 10.0pt;">LED- ----GND&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</span></p>
</td>
</tr>
</tbody>
</table>
<p><span style="font-size: 10pt; line-height: 107%; font-family: 'times new roman', times; color: #555555;">B&ouml;ylelikle LCD Display i&ccedil;in gerekli kodlama işlemleri aşağıdaki gibi olmuştur.</span></p>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="line-height: normal; text-autospace: none; margin: 0cm 0cm .0001pt 35.4pt;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong>init_lcd</strong>(){&nbsp;&nbsp;&nbsp; <strong><span style="color: #642880;">SysCtlClockSet</span></strong>(SYSCTL_SYSDIV_4|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; <strong><span style="color: #642880;">SysCtlPeripheralEnable</span></strong>(SYSCTL_PERIPH_GPIOF);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; <strong><span style="color: #642880;">SysCtlPeripheralEnable</span></strong>(SYSCTL_PERIPH_GPIOA);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; <strong><span style="color: #642880;">GPIOPinTypeGPIOOutput</span></strong>(GPIO_PORTA_BASE, GPIO_PIN_6);</span></p>
<p style="line-height: normal; text-autospace: none; margin: 0cm 0cm .0001pt 35.4pt;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #642880;">GPIOPinTypeGPIOOutput</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);</span></p>
<p style="line-height: normal; text-autospace: none; margin: 0cm 0cm .0001pt 35.4pt;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #642880;">GPIOPinWrite</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0x00)</span></p>
<p style="line-height: normal; text-autospace: none; margin: 0cm 0cm .0001pt 35.4pt;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;</span></p>
<p style="line-height: normal; text-autospace: none; margin: 0cm 0cm .0001pt 35.4pt;"><span style="font-size: 10.0pt; font-family: 'Courier New';">LCD_16x2_595_init();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp; LCD_595_Init();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp; Lcd_595_Cmd(LCD_CURSOR_OFF);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;Lcd_595_text(1,1,<span style="color: #2a00ff;">"Starting..."</span>);</span></p>
<p style="text-indent: 35.4pt; line-height: normal;"><span style="font-size: 10.0pt; font-family: 'Courier New';">}</span></p>
</td>
</tr>
</tbody>
</table>
<p style="line-height: normal;"><span style="font-size: 10pt; font-family: 'times new roman', times;">Dışarıdan led bağlamak i&ccedil;in port D se&ccedil;ilmiş ve aşağıdaki gibi kodlanmıştır.</span></p>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="margin-bottom: .0001pt; text-indent: 35.4pt; line-height: normal; text-autospace: none;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong>init_port_D</strong>() {</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">volatile</span></strong> <strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">unsigned</span></strong> <strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">long</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> delay;</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp; SYSCTL_RCGC2_R |= SYSCTL_RCGC2_GPIOD; //Port D&rsquo;yi aktifleştirir</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp; delay = SYSCTL_RCGC2_R; //Zaman ge&ccedil;irmek i&ccedil;in</span></p>
<p style="margin-bottom: .0001pt; text-indent: 35.4pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">GPIO_PORTD_DIR_R |= 0x0F; //PD 3,2,1,0 pinlerini &ccedil;ıkış yapar </span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp; GPIO_PORTD_AFSEL_R &amp;= ~0x0F;//PD 3,2,1,0 pinlerini alternatif </span><span style="font-size: 10.0pt; font-family: 'Courier New';">fonksiyonunu o yapar</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; &nbsp; GPIO_PORTD_DEN_R |= 0x0F; //PD 3,2,1,0 pinlerini aktifleştirir</span></p>
<p style="margin-bottom: .0001pt; text-indent: 35.4pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">}</span></p>
</td>
</tr>
</tbody>
</table>
<p><span style="font-size: 10pt; font-family: 'times new roman', times;">Port D ve LCD Display i&ccedil;in gerekli işlemler ger&ccedil;ekleştikten sonra ekranı temizlemek i&ccedil;in aşağıdaki fonksiyon kullanılmıştır.</span></p>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong>temizle</strong>(){</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; delay(5000);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R &amp;= ~0b0001;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D0 <u>portundaki</u> <u>ledi</u> <u>kapa</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R &amp;= ~0b0010;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D1 <u>portundaki</u> <u>ledi</u> <u>kapat</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R &amp;= ~0b0100;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D2 <u>portundaki</u> <u>ledi</u> <u>kapat</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R &amp;= ~0b1000;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D3 <u>portundaki</u> <u>ledi</u> <u>kapa</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_Cmd(LCD_CLEAR);</span></p>
<p><span style="font-size: 10.0pt; line-height: 107%; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; }</span></p>
</td>
</tr>
</tbody>
</table>
<p><span style="font-size: 10pt; font-family: 'times new roman', times;">Proje i&ccedil;in hedeflenen koşullar aşağıdaki şekilde ger&ccedil;ekleşmiştir;</span></p>
<ul style="list-style-type: circle;">
<li><span style="font-size: 10pt; font-family: 'times new roman', times;"><span style="line-height: 107%; color: black;">Kırmızı led yandığı zaman istenenler aşağıdaki fonksiyonda kodlanmıştır.</span></span></li>
</ul>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong>kirmiziLedYak</strong>(){</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R |=&nbsp; 0b0100;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D2 <u>portundaki</u> <u>ledi</u> <u>yak</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_Cmd(SHIFT_OFF);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(1,16,"<u>kocaeli</u> <u>uni</u>");</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; delay(2000);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(2,16,"<u>gulnihan</u> <u>berberoglu</u>");</span></p>
<p><span style="font-size: 10.0pt; line-height: 107%; font-family: 'Courier New';">}</span></p>
</td>
</tr>
</tbody>
</table>
<ul style="list-style-type: circle;">
<li>
<p><span style="font-size: 10pt; font-family: 'times new roman', times;">Beyaz led yandığı zaman istenenler aşağıdaki fonksiyonda kodlanmıştır.</span></p>
<table style="border-collapse: collapse; width: 111.73%; height: 20px;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong><span style="background: lightgrey;">beyazLedYak</span></strong>(){</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R |=&nbsp; 0b1000;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D3 <u>portundaki</u> <u>ledi</u> <u>yak</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_Cmd(SHIFT_OFF);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(2,16,"<u>gulnihan</u> <u>berberoglu</u>");</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; delay(2000);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(1,16,"<u>kocaeli</u> <u>uni</u>");</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">}</span></p>
</td>
</tr>
</tbody>
</table>
</li>
<li>
<p><span style="font-size: 10pt; font-family: 'times new roman', times;">Yeşil led yandığı zaman istenenler aşağıdaki fonksiyonda kodlanmıştır.</span></p>
</li>
</ul>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong>yesilLedYak</strong>(){</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R |=&nbsp; 0b0001;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D0 <u>portundaki</u> <u>ledi</u> <u>yak</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_Cmd(SHIFT_ON);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(1,16,"<u>kocaeli</u> <u>uni</u>");</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; delay(2000);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(2,16,"<u>gulnihan</u> <u>berberoglu</u>");</span></p>
<span style="font-size: 10.0pt; line-height: 107%; font-family: 'Courier New'; color: black;">}</span></td>
</tr>
</tbody>
</table>
<ul style="list-style-type: circle;">
<li><span style="font-size: 10pt; line-height: 107%; font-family: 'times new roman', times; color: black;"><span style="font-size: 10pt; line-height: 107%; font-family: 'times new roman', times; color: black;">Mavi led yandığı zaman istenenler aşağıdaki fonksiyonda kodlanmıştır.</span></span>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;">&nbsp;<strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong>maviLedYak</strong>(){</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; GPIO_PORTD_DATA_R |=&nbsp; 0b0010;</span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//D1 <u>portundaki</u> <u>ledi</u> <u>yak</u></span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_Cmd(SHIFT_ON);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(1,16,"<u>kocaeli</u> <u>uni</u>");</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; delay(2000);</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #3f7f5f;">//Lcd_595_text(2,16,"<u>gulnihan</u> <u>berberoglu</u>");</span></p>
<p><span style="font-size: 10.0pt; line-height: 107%; font-family: 'Courier New';">}</span></p>
</td>
</tr>
</tbody>
</table>
<p style="margin-bottom: 16.9pt; tab-stops: 35.4pt;"><span style="font-size: 10pt; font-family: 'times new roman', times;">Program başlangı&ccedil;ta rastgele bir led yakıp, ledler i&ccedil;in belirtilen durumlarda yazılar LCD Display e tamamen yazıldıktan sonra programın 3 saniye beklemesi ve rastgele yeni bir ledi yakıp diğer ledleri s&ouml;nd&uuml;rmesinin kullanıcıya g&ouml;sterilmesi main() fonksiyonunda aşağıdaki gibi kodlanmıştır. Program&nbsp; istenildiği gibi sonsuz bir d&ouml;ng&uuml;de &ccedil;alıştırılmıştır.</span></p>
<table style="border-collapse: collapse; width: 100%;" border="1">
<tbody>
<tr>
<td style="width: 100%;">
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">void</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> <strong>main</strong>()</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">{</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; init_lcd();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; init_port_D();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">while</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> (1) {</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; temizle();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #642880;">srand</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">(</span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #642880;">time</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">(NULL));</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">int</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> rastgele=</span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #642880;">rand</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">()%4 + 1;</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">switch</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">(rastgele){</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">case</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> 1:</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; kirmiziLedYak();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">break</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">;</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">case</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> 2:</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <span style="background: lightgrey;">beyazLedYak</span>();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">break</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">;</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">case</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> 3:</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; maviLedYak();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">break</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">;</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">case</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';"> 4:</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; yesilLedYak();</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; </span><strong><span style="font-size: 10.0pt; font-family: 'Courier New'; color: #7f0055;">break</span></strong><span style="font-size: 10.0pt; font-family: 'Courier New';">;</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; }</span></p>
<p style="margin-bottom: .0001pt; line-height: normal; text-autospace: none;"><span style="font-size: 10.0pt; font-family: 'Courier New';">&nbsp;&nbsp;&nbsp; }</span></p>
<p style="margin-bottom: 16.9pt; tab-stops: 35.4pt;"><span style="font-size: 10.0pt; line-height: 107%; font-family: 'Courier New';">}</span></p>
</td>
</tr>
</tbody>
</table>
</li>
</ul>
