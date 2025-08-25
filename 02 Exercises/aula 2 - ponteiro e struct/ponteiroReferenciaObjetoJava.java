public class Main
{
    public static class Aluno {
        public String nome;
        public String email;
    }
    
	public static void main(String[] args) {
	    Aluno a1 = new Aluno() {{nome = "Heleno"; email = "hhh@gmail.com"; }};
	    Aluno a2 = new Aluno() {{nome = "Juju"; email = "juju@gmail.com"; }};
	    Aluno a3 = a2;
	    
	    a3.nome = "Josy";
	    a3.email = "josy@gmail.com";

		System.out.println("a1=> Nome: " + a1.nome);
		System.out.println("a1=> Email: " + a1.email);
		System.out.println("");

		System.out.println("a2=> Nome: " + a2.nome);
		System.out.println("a2=> Email: " + a2.email);
		System.out.println("");
		
		System.out.println("a3=> Nome: " + a3.nome);
		System.out.println("a3=> Email: " + a3.email);
	}
}
