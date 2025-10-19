# BINARY SEARCH (2 cơ)
Tìm trên dãy thứ tự: Dùng 2 con trỏ $$l,r$$ ngược chiều làm phạm vi tìm $$x$$ trên dãy thứ tự $$A$$, lấy $$m$$ là trung điểm phần nguyên $$l,r$$. Nếu $$A_m=x$$ thì `ret` $$m$$, $$A_m\lt x$$ thì chặt $$l$$, $$A_m>x$$ thì chặt $$r$$.

- Điều kiện: $$A_1\leq A_2\leq...\leq A_n$$
- Cài đặt:
```
sort(a, a + n); // Sắp xếp dãy
int bs(int a[], int n, int x) {
	int l = 0, r = n - 1, m;
	
	while (l <= r) { // Đến khi phạm vi < 0
		m = l + (r - l) / 2; // Trung điểm
		
		if (a[m] == x) return m;
		if (a[m] < x) l = m + 1; // Chặt l
		else { r = m - 1; } // Chặt r
	} return -1; // k0 tìm thấy
}
```

## Cải tiến: Lower Bound (lwb)
Mục đích: Tìm $$\min(i)$$ để $$A_{\min(i)}\geq x$$. K0 có thì `ret` $$n$$.
- Cài đặt:
```
int lwb(int a[], int n, int x) {
	int l = 0, r = n - 1, m, ans = n;
	
	while (l <=r) {
		m = (l + r) / 2;
		
		if (a[m] >= x) {
			ans = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	} return ans;
}
```
- Fact: Có thể dùng hàm sẵn std::lower_bound của STL, dùng trỏ giá trị (`*`) khi muốn lấy giá trị.
+ Tĩnh: `*lower_bound(a, a + n, x);`
+ Vector: `*lower_bound(a.begin(), a.end(), x);`
+ Nếu cần so sánh cách riêng thì xây hàm comp, sau thì viết: `lower_bound(<đầu>,<kết>,<tìm>,comp);`
