using System.Data;

class Shom666{
    public static void shom666(string[] args)
    {
        // ReadLine()에 null이 들어올 수 있으므로 string?으로 선언
        string? N = Console.ReadLine();
        if (N == null)
        {
            return;
        }
        int cnt = int.Parse(N);
        int num = 665;
        
        while (cnt > 0)
        {
            num++;
            if (num.ToString().Contains("666"))
            {
                cnt--;
            }
        }
        Console.WriteLine(num);
    }}

