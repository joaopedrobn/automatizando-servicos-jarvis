# Automatizando-Servicos-Jarvis
### Programa para automatizar o reinício dos serviços do Jarvis

• Baixe os arquivos e crie uma pasta para eles.
• Feito isso, voce deve baixar o codeblocks para poder gerar a build do app.

• Com o codeblocks baixado, você abre o arquivo autoclick.cbp como mostrado nas duas imagens a baixo.

![image](https://github.com/user-attachments/assets/7c1f266f-4b59-448e-af83-aa0bc712f04f)

![image](https://github.com/user-attachments/assets/fb2f2b25-0047-4baa-ad0d-de5bd90110be)

• Feito isso, você então vai na aba "build" e clique em build novamente, ou então aperte Ctrl-F9 como mostrado na imagem abaixo.

![image](https://github.com/user-attachments/assets/f3fc9362-6197-43fc-954c-aed3e9b5f499)

• Pronto, o arquivo .exe já vai estar gerado, e você acessa ele indo na pasta que você criou inicialmente. Lá dentro, vai perceber que duas novas pastas foram criadas, são elas: "bin" e "obj".
• Clique na pasta "bin" e depois em "Debug", e então lá vai estar o seu aplicativo.
• Segue imagens abaixo de demonstração.

![image](https://github.com/user-attachments/assets/7e4f20be-25bb-49ef-8a15-687a5a3b0e6c)

![image](https://github.com/user-attachments/assets/f1a44946-322b-45dd-af30-2e041a2501d9)

![image](https://github.com/user-attachments/assets/d3b579f0-2c70-48b4-9ae6-e8f6fc0c6095)

• Basta então mover esse arquivo para o PC que deseja, lembrando que esse aplicativo pensado e criado para ser executado em um Windows Server 2008 R2, mas ACHO que pode ser executado em outras versões de OS Windows, pois nenhuma linha nele foi especificamente escrita para o Windows Server 2008 R2 exclusivamente.

• Agora, você precisa automatizar essa tarefa, e isso é bem simples e fácil de fazer pelo próprio CMD do Windows.

• Abra então o CMD como Administrador, e lá você vai digitar a seguinte linha de código: 
```
SCHTASKS /CREATE /SC MINUTE /MO 30 /TN "NomeDaTarefa" /TR "C:\caminho\para\seu\aplicativo.exe" /RU "Sistema"
```

• E para que você entenda o que parte dessa linha faz, vou te explicar agora.
```
• /SC MINUTE: Define o intervalo de tempo (minuto).
• /MO 30: Define a frequência (a cada 30 minutos mas você pode mudar, seja para 60, 120 e etc. Basta substituir pelo tempo em minutos no código ali).
• /TN "NomeDaTarefa": Nome da tarefa.
• /TR "C:\caminho\para\seu\aplicativo.exe": Caminho completo para o aplicativo a ser executado.
• /RU "Sistema": Executa a tarefa com a conta do sistema.
```

• Agora para conferir se a tarefa foi criada corretamente, digite a seguinte linha no CMD:
```
SCHTASKS /QUERY /TN "NomeDaTarefa"
```

• E para excluir caso crie errado, use a seguinte linha também no CMD:
```
SCHTASKS /DELETE /TN "NomeDaTarefa" /F
```

• Se você tiver feito tudo certo, é para o CMD te retornar as seguintes mensagens (respectivamente com a ordem na qual elas foram passadas)

![image](https://github.com/user-attachments/assets/0a756b34-9c87-4fde-b009-d18cf4e24c2c)

![image](https://github.com/user-attachments/assets/20aae7b4-04b3-4c0e-a38f-69ffd272ba5b)

![image](https://github.com/user-attachments/assets/162890c3-2949-4a4c-8437-e47dd4963d40)

• Com todos os passos feitos corretamente, só aguardar os primeiros 30 minutos que a tarefa será executada. E depois disso, só deixar o Windows e o aplicativo que você criou fazer o resto.
