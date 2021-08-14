//快速排序使用的分区函数
//记住它的办法，用三个交换作为主线，其中第二次交换，用具体例子画图出来比较容易理解
//要求能在5分钟内写出来
int partition(int a[], int start, int end)
{
  //取第一个元素作为标准值
  int index = start;
  
  //第一次交换
  int tmp = a[index];
  a[index] = a[end];
  a[end] = tmp;
  
  for (int i = 0; i < end; i++)
  {
    if (a[i] < a[end])
    {
      if (i != index)
      {
        //第二次交换
        tmp = a[index];
        a[index] = a[i];
        a[i] = tmp;
      }
      index++;
    }
  }
  
  //第三次交换
  tmp = a[index];
  a[index] = a[end];
  a[end] = tmp;
  
  return index;
}

