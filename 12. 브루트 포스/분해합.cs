class SplitSum{
    public static void splitsum(string[] args)
    {
        // ReadLine()에 null이 들어올 수 있으므로 string?으로 선언
        string? NM = Console.ReadLine();
        if (NM == null)
        {
            return;
        }
        int N = int.Parse(NM);
        int N_length = NM.Length;
        int result = 0;
        for (int i = N - N_length*9; i < N; i++)
        {
            int sum = i;
            // i.ToString() : i를 문자열로 변환
            // Select(x => x - '0') : 문자열을 자리수별로 숫자로 변환
            // ToList() : List로 변환
            List<int> numList = i.ToString().Select(x => x - '0').ToList();
            sum += numList.Sum();
            if (sum == N)
            {
                result = i;
                break;
            }
        }
        
        Console.WriteLine(result);
    }
}

