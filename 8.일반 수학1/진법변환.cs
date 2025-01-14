// See https://aka.ms/new-console-template for more information
using System;

class BaseConversion{
    public static void baseconversion(string[] args)
    {
        string? s = Console.ReadLine();
        if (s == null)
        {
            return;
        }
        string[] arr = s.Split(' ');
        int num_len = arr[0].Length;
        int b = int.Parse(arr[1]);
        int result = 0;
        for (int i = 0; i < num_len; i++)
        {
            int a = Convert.ToInt32(arr[0][num_len - i - 1]);
            if (a >= 65)
            {
                a -= 55;
            }
            else
            {
                a -= 48;
            }
            result += a * (int)Math.Pow(b, i);
        }
        Console.WriteLine(result);
    }
}

