
int main(int* values) {
	sort(values, 0, values.length);
}

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
	mergeUp(values, start, end);

}

int mergeUp(int* values, int start, int end) {
	int rangeSize = end - start;
	int mergeSize = 2;
	int cur1 = 0;
	int cur2 = 0;
	int mid = start + rangeSize/2;

	if rangeSize <= 2 {
		return;
	}
	


}
