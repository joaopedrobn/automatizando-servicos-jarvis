# 🔄 Automatizando Serviços Jarvis

### 🚀 Programa para automatizar o reinício dos serviços do Jarvis

## 📂 Passos iniciais

1. 📥 **Baixe os arquivos** e crie uma pasta para organizá-los.
2. 🖥️ **Instale o Code::Blocks** para gerar a build do aplicativo.
3. 📂 **Abra o projeto**: Com o Code::Blocks instalado, abra o arquivo `autoclick.cbp` conforme demonstrado nas imagens abaixo:

![image](https://github.com/user-attachments/assets/7c1f266f-4b59-448e-af83-aa0bc712f04f)

![image](https://github.com/user-attachments/assets/fb2f2b25-0047-4baa-ad0d-de5bd90110be)

4. 🔨 **Compile o projeto**: Vá até a aba **"Build"** e clique em **"Build"**, ou pressione `Ctrl + F9`, como mostrado abaixo:

![image](https://github.com/user-attachments/assets/f3fc9362-6197-43fc-954c-aed3e9b5f499)

## 📌 Localização do Arquivo Gerado

- O executável `.exe` será gerado automaticamente.
- Acesse a pasta criada inicialmente e observe a criação de duas novas pastas:
  - 📁 `bin`
  - 📁 `obj`
- Navegue até `bin -> Debug`, onde estará localizado seu aplicativo.

📸 **Imagens ilustrativas:**

![image](https://github.com/user-attachments/assets/7e4f20be-25bb-49ef-8a15-687a5a3b0e6c)

![image](https://github.com/user-attachments/assets/f1a44946-322b-45dd-af30-2e041a2501d9)

![image](https://github.com/user-attachments/assets/d3b579f0-2c70-48b4-9ae6-e8f6fc0c6095)

## 🏷️ Compatibilidade

📌 Este aplicativo foi desenvolvido para **Windows Server 2008 R2**, mas pode funcionar em outras versões do Windows, pois **não possui comandos específicos para o 2008 R2**.

## 🔄 Automatizando a Execução com o CMD

Para automatizar o processo, utilize o **Agendador de Tarefas do Windows** através do CMD:

### 🛠️ Criando uma Tarefa Agendada

Abra o CMD como **Administrador** e execute o seguinte comando:

```bash
SCHTASKS /CREATE /SC MINUTE /MO 30 /TN "NomeDaTarefa" /TR "C:\caminho\para\seu\aplicativo.exe" /RU "Sistema"
```

### 🧐 Explicação dos Parâmetros

```
• /SC MINUTE      -> Define a unidade de tempo (minuto).
• /MO 30          -> Define a frequência (a cada 30 minutos). Você pode alterar para 60, 120, etc.
• /TN "NomeDaTarefa" -> Define o nome da tarefa.
• /TR "C:\caminho\para\seu\aplicativo.exe" -> Caminho do executável.
• /RU "Sistema"   -> Executa a tarefa com a conta do sistema.
```

### ✅ Verificando a Tarefa Criada

Para confirmar que a tarefa foi adicionada corretamente, execute:

```bash
SCHTASKS /QUERY /TN "NomeDaTarefa"
```

### ❌ Excluindo uma Tarefa Agendada

Caso tenha cometido um erro na criação da tarefa, exclua-a com:

```bash
SCHTASKS /DELETE /TN "NomeDaTarefa" /F
```

## 📸 Mensagens de Retorno

Se tudo estiver configurado corretamente, o CMD retornará mensagens semelhantes às seguintes:

![image](https://github.com/user-attachments/assets/0a756b34-9c87-4fde-b009-d18cf4e24c2c)

![image](https://github.com/user-attachments/assets/20aae7b4-04b3-4c0e-a38f-69ffd272ba5b)

![image](https://github.com/user-attachments/assets/162890c3-2949-4a4c-8437-e47dd4963d40)

## ⏳ Conclusão

Com todos os passos seguidos corretamente, basta aguardar **30 minutos** para que a tarefa seja executada automaticamente. A partir daí, **o Windows e o aplicativo cuidarão do restante!** 🚀
