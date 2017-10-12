

int sort(int* values, int start, int end) {
	int rangeSize = endPoint - startPoint;
	int mid = start + rangeSize/2;
	int temp = 0;


	if rangeSize > 2 {
		sort(values, start, mid);
		sort(values, mid, end);
	}	
	else {
		if values[0] > values[1] {
			int temp = values[1];
			values[1] = values[0];
			values[0] = temp;	
		}
	}
	mergeUp(values, startPoint, endPoint);

}

int mergeUp(int* values, int startPoint, int endPoint) {
	int rangeSize = endPoint - startPoint;
	int mergeSize = 2;
	int cur1 = 0;
	int cur2 = 0;

	if rangeSize != 2 {
		return;
	}
	

}
