
int mergeUp(int* values, int start, int end, int mid) {
	int rangeSize = end - start;
		
	int cur1 = start;
	int cur2 = mid;
	int cur3 = 0;
	
	int* dest = (int*) calloc(rangeSize+1, sizeof(int));
	
	while (cur1 < mid && cur2 < end) {
		if (values[cur1] < values[cur2]) {
			dest[cur3] = values[cur1];
			cur1++;
		} else{
			dest[cur3] = values[cur2];
			cur2++;
		}
		cur3++;
	}
	while (cur1 < mid) {
		dest[cur3] = values[cur1];
		cur1++;
		cur3++;
	}
	while (cur2 < end) {
		dest[cur3] = values[cur2];
		cur2++;
		cur3++;
	}
	for (int i = 0; i < rangeSize; i++) {
		values[i + start] = dest[i];
	}

}

int sort(int* values, int start, int end) {
	int rangeSize = end - start;
	int mid = start + rangeSize/2;
	int temp = 0;


	if (rangeSize > 2) {
		sort(values, start, mid);
		sort(values, mid, end);
		mergeUp(values, start, end, mid);
	}	
	else {
		if (values[0] > values[1]) {
			int temp = values[1];
			values[1] = values[0];
			values[0] = temp;	
		}
	}
	
}

int main(int* values) {
	sort(values, 0, sizeof(values)/sizeof(int));
}

