class MathOnline{
    public static void mathonline(string[] args)
    {
        string? NM = Console.ReadLine();
        if (NM == null)
        {
            return;
        }
        List<int> parameters = NM.Split(' ').Select(x => int.Parse(x.Replace(" ", string.Empty))).ToList();
        int tmp1 = parameters[4] * parameters[2] - parameters[1] * parameters[5];
        int tmp2 = parameters[0] * parameters[4] - parameters[1] * parameters[3];
        int X = tmp1 / tmp2;
        tmp1 = parameters[3] * parameters[2] - parameters[0] * parameters[5];
        tmp2 = parameters[1] * parameters[3] - parameters[0] * parameters[4];
        int Y = tmp1 / tmp2;
        Console.WriteLine(X + " " + Y);
    }
}

