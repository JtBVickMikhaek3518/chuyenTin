# Giải
## Thuật toán ngây thơ
Kiểm tra từng số nguyên dương $$x$$ từ nhỏ đến lớn, đến khi thoả thì dừng và in $$x$$.\
Độ phức tạp: $$\mathcal{O}(\frac{x\times log(ab)}{\mathcal{O}(x-|a-b|)}\times log(ab))$$ (Do nhận xét đáp án $$\ge|a-b|$$)\
Trong thuật toán chuẩn sẽ chứng minh được x, từ đó thấy sẽ có rất nhiều trường hợp $$x$$ quá lớn -> thuật toán kém hiệu quả. (TLE)
## Thuật toán tối ưu
Tìm công thức của $$x$$ thay vì duyệt, ta có:\
$$a+x\ \vdots\ b$$ -> $$a+x=b\times h$$\
$$b+x\ \vdots\ a$$ -> $$b+x=a\times q$$\
-> $$a+x+a\times q=b+x+b\times h$$\
-> $$a(q+1)=b(h+1)$$

Gọi:
- $$t=a(q+1)=b(h+1)$$
- $$a+x=bh$$
-> $$x=bh-a$$\
mà $$t=bh+b$$\
-> $$x-t=-a-b$$\
-> $$x=t-a-b$$\
Mà ta đang tìm $$x$$ nhỏ nhất -> $$t$$ nhỏ nhất\
Mà $$t$$ phải chia hết a và b\
-> $$t=lcm(a,b)$$\
-> $$x=lcm(a,b)-a-b$$

**Trường hợp đặc biệt:** $$a\ge b$$\
- $$a=k\times b\ (k > 1)$$
