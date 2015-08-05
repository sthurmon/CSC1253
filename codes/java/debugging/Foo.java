public class Foo() {
    int[] a;
    public foo(int[] a) {
     // copy
     for(int i=0; i<=a.length;i++)
         a[i] = this.a[i];
     }
     public String toString() {
         StringBuilder sb;
         sb += "[";
         for(int i=0;i<a.length;i++)
         sb.append(",");
         sb.append(a[i]);
         sb.append("]");
         return sb.toString();
     }
     public void main() {
         Foo f = new Foo(new int[]{1,2,3});
         System.out.println(f);
     }
}
