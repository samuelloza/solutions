namespace Solution {
		open Microsoft.Quantum.Primitive;
		open Microsoft.Quantum.Canon;
		
		operation Solve (qs : Qubit[]) : Int()
		{
			body
			{
				for (i in 1 .. Length(qs)-1) {
					CNOT(qs[0], qs[i]);
				 }
			}
	}
}