// See https://aka.ms/new-console-template for more information
using System;

class BaseConversion2{
    public static void baseconversion2(string[] args)
    {
        // ReadLine()에 null이 들어올 수 있으므로 string?으로 선언
        string? s = Console.ReadLine();
        if (s == null)
        {
            return;
        }
        string[] arr = s.Split(' ');
        int a = int.Parse(arr[0]);
        string[] result = new string[100];
        int idx = 0;
        int b = int.Parse(arr[1]);
        while (a > 0)
        {
            int r = a % b;
            char c = ' ';
            if (r >= 10)
            {
                c = (char)(r + 55);
            }
            else
            {
                c = (char)(r + 48);
            }
            a = a / b;
            result[idx] = c.ToString(); // char를 string으로 변환해야 저장할 수 있음
            idx++;
            
        }
        for (int i = idx - 1; i >= 0; i--)
        {
            Console.Write(result[i]);
        }
    }
}

