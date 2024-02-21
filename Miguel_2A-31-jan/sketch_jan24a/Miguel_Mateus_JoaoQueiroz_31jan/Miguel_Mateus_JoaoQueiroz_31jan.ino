// Declaração de variaveis para numeros decimais
float sal_atual, novo_sal;

void setup() {
  // Configuração inicial do sistema
  // Será executada somente no inicio

  sal_atual = 1200;

  // verificando o valor do salario com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {  //incio
    novo_sal = sal_atual * 1.2;
  }  //fim
  else if (sal_atual > 500) {
    novo_sal = sal_atual * 1.1;
  } else {
    novo_sal = 0;
  }

  // Iniciando a comunicação com o Monitor Serial
  Serial.begin(9600);
}

void loop() {
  // Código que será executado repetidamente
  // Serial.println("Hoje é o ultimo dia do mês de janeiro!!! ");  // Mostra a frase no monitor
  if (novo_sal == 0) {
    Serial.println("Digite um salário válido");
  } else {

    // Exibindo o novo salario
    Serial.print("Novo Salário:");
    Serial.println(novo_sal);
    Serial.println("----------------------------------");
    delay(1000);  // Espera 1 segundo antes de seguir o loop
  }
}
