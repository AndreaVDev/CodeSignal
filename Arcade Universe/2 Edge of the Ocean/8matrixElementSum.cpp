int da_togliere(std::vector<std::vector<int>> matrix, int r, int c) {
	int to_delete = 0;

		for (int j = r; j < matrix.size(); j++)
		{
			to_delete += matrix[j][c];
		}
	
	return to_delete;
}

// se ho piu' zeri nella stessa colonna devo visitare quella colonna una sola volta uso bool
// funzionante ma devo capire come controllare i bordi
int matrixElementsSum(std::vector<std::vector<int>> matrix) {
	int daTogliere = 0;
	int somma = 0;
	int s = matrix.size();
	bool row_to_check = false;
	bool checked = false;
	std::vector<int> checked_cols;
	// per ogni riga
	for (int i = 0; i < matrix.size(); i++)
	{
		// per ogni colonna
		for (int j = 0; j < matrix[i].size(); j++)
		{
			
			// se la cella contiene il valore zero
			if (matrix[i][j] == 0 && i < matrix.size() - 1)
			{
				for (int v = 0; v < checked_cols.size(); v++)
				{
					if (checked_cols[v] == j) {
						checked = true;
						//row_to_check = true;
					}
				}

			
				if (checked == false  ) {
					checked_cols.push_back(j);
					daTogliere += da_togliere(matrix, i, j);
				}

				// aggiungi il valore sottostane alla somma dei numeri da togliere
				//daTogliere += matrix[i+1][j];
				
				
			}
			// somma ogni elemento della matrice
			somma += matrix[i][j];
			checked = false;
		}
	}
	// ritorna la somma esatta
	return (somma-daTogliere);
}