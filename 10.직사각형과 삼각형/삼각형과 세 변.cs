using System;
using System.ComponentModel.DataAnnotations;
using System.Data;

class Triangle3{
    public static void triangle3(string[] args)
    {
        while (true)
        {
            // ReadLine()에 null이 들어올 수 있으므로 string?으로 선언
            string? N = Console.ReadLine();
            if (N == null || N == "0 0 0")
            {
                return;
            }
            List<int> arr = N.Split(' ').Select(x => int.Parse(x)).ToList();
            arr.Sort();
            if (arr[0] == arr[1] && arr[1] == arr[2])
            {
                Console.WriteLine("Equilateral");
            }
            else if (arr[2] >= arr[0] + arr[1])
            {
                Console.WriteLine("Invalid");
            }
            else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[2] == arr[0])
            {
                Console.WriteLine("Isosceles");
            }
            else 
            {
                Console.WriteLine("Scalene");
            }
        }
    }}

