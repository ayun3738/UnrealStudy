using System.Data;

class PrimeSearch{
    public static void primesearch(string[] args)
    {
        // ReadLine()에 null이 들어올 수 있으므로 string?으로 선언
        string? T = Console.ReadLine();
        if (T == null)
        {
            return;
        }
        int Tint = int.Parse(T);

        // 주어진 수 입력받아 저장
        List<int> primes = new List<int>();
        string? N = Console.ReadLine();
        if (N == null)
        {
            return;
        }
        string[] arr = N.Split(' ');
        primes = arr.Select(x => int.Parse(x)).ToList();

        // 최대값 기준으로 소수 찾기
        int max_N = primes.Max();
        bool[] is_prime = new bool[max_N + 1];
        for (int i = 2; i <= max_N; i++)
        {
            if (is_prime[i] == false)
            {
                for (int j = 1; j <= max_N/i; j++ )
                {
                    is_prime[i*j] = true;
                }
                is_prime[i] = true;
            }
            else
            {
                is_prime[i] = false;
            }
        }

        // 주어진 수에서 소수 세기
        int cnt = 0;
        for (int i = 0; i < Tint; i++)
        {
            if (is_prime[primes[i]] == true)
            {
                cnt++;
            }
        }
        Console.WriteLine(cnt);
    }}

